#include "buff001740.h"
#include "ground.h"
#include "log/logger.h"

void Buff001740::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001741(src, des, 1740));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001741::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float k = Ground::addkn(ground, des, 0, 2.5);
        k5 += k;
        ground->m_group[des/10].m_item[des%10].k[5] += k;
    }
}

void Buff001741::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
}

void Buff001741::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float k = Ground::addkn(ground, des, 0, 2.5);
        k5 += k;
        ground->m_group[des/10].m_item[des%10].k[5] += k;
    }
}
