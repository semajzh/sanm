#include "buff1011122.h"
#include "ground.h"
#include "log/logger.h"

void Buff1011122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float j = Ground::addjn(ground, des, 13, point1);
        j13 += j;
        ground->m_group[des/10].m_item[des%10].j[13] += j;
    }
}

void Buff1011122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}

void Buff1011122::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float j = Ground::addjn(ground, des, 13, point1);
        j13 += j;
        ground->m_group[des/10].m_item[des%10].j[13] += j;
    }
}
