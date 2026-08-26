#include "buff0013624.h"
#include "ground.h"
#include "log/logger.h"

void Buff0013624::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 3)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        j4 += point1;
        ground->m_group[des/10].m_item[des%10].j[4] += point1;
    }
}

void Buff0013624::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
}

void Buff0013624::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 3)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        j4 += point1;
        ground->m_group[des/10].m_item[des%10].j[4] += point1;
    }
}
