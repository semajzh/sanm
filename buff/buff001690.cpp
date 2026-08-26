#include "buff001690.h"
#include "ground.h"
#include "log/logger.h"

void Buff001690::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001691(src, des, 1690));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001691::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 3, 4.5f);
        k3 += k;
        ground->m_group[des/10].m_item[des%10].k[3] += k;
    }
}

void Buff001691::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[3] -= k3;
}

void Buff001691::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 3, 4.5f);
        k3 += k;
        ground->m_group[des/10].m_item[des%10].k[3] += k;
    }
}
