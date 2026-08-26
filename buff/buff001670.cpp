#include "buff001670.h"
#include "ground.h"
#include "log/logger.h"

void Buff001670::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k3 = Ground::addkn(ground, des, 3, 12);
    ground->m_group[des/10].m_item[des%10].k[3] += k3;
}

void Buff001670::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[3] -= k3;
}


