#include "buff0050121.h"
#include "ground.h"
#include "log/logger.h"

void Buff00501211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 25, src, method);
    k1 = -point1 - ground->m_group[src/10].m_item[src%10].i[2] / 30;
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
}

void Buff00501211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}

void Buff00501212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 16, src, method);
    k2 = -point1 - ground->m_group[src/10].m_item[src%10].i[2] / 30;
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff00501212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

