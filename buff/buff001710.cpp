#include "buff001710.h"
#include "ground.h"
#include "log/logger.h"

void Buff001710::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k5 = Ground::addkn(ground, des, 5, 7);
    ground->m_group[des/10].m_item[des%10].k[5] += k5;
}

void Buff001710::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
}


