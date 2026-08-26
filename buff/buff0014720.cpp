#include "buff0014720.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014720::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j13 = Ground::pointbystar(ground, 16, src, method);
    float point1 = Ground::pointbystar(ground, 35, src, method);
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
    k0 = Ground::addkn(ground, des, 0, point1);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff0014720::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}
