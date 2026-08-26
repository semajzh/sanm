#include "buff001010.h"
#include "ground.h"
#include "log/logger.h"

void Buff001010::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k2 = Ground::addkn(ground, des, 2, 6);
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff001010::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}
