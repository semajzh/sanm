#include "buff001490.h"
#include "ground.h"
#include "log/logger.h"

void Buff001490::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001491(src, des, 1490));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001491::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float k = Ground::addkn(ground, des, 0, 1);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff001491::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff001491::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float k = Ground::addkn(ground, des, 0, 1);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}
