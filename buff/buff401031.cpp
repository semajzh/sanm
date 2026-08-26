#include "buff401031.h"
#include "ground.h"
#include "log/logger.h"

void Buff401031::run(Ground* ground, int obj)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010312(des, obj, method, 2));
    Ground::addBuff(ground, ground->buff[0][obj], buff);
}

void Buff4010312::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float k = Ground::addkn(ground, des, 0, 6);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff4010312::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff4010312::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        float k = Ground::addkn(ground, des, 0, 6);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}
