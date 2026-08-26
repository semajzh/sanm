#include "buff401131.h"
#include "buff012.h"
#include "ground.h"
#include "log/logger.h"

void Buff401131::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4011312(src, des, 401131, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff4011312::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    if (++count <= 2)
    {
        float l = Ground::addln(ground, des, 0, -7);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff4011312::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff4011312::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);

    if (++count <= 2)
    {
        float l = Ground::addln(ground, des, 0, -7);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}
