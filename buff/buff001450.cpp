#include "buff001450.h"
#include "ground.h"
#include "log/logger.h"

void Buff001450::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001451(src, des, 1450));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001451::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float l = Ground::addln(ground, des, 0, -1.2);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff001451::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff001451::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float l = Ground::addln(ground, des, 0, -1.2);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}
