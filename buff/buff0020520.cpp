#include "buff0020520.h"
#include "ground.h"
#include "log/logger.h"

void Buff0020520::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 6, src, method);
    k0 = 0;
    j5 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 100;
    ground->m_group[des/10].m_item[des%10].j[5] += j5;
}

void Buff0020520::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].j[5] -= j5;
}

void Buff0020520::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float k = Ground::addkn(ground, des, 0, point1);
    k0 += k;
    ground->m_group[des/10].m_item[des%10].k[0] += k;
}
