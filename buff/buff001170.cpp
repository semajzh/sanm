#include "buff001170.h"
#include "ground.h"
#include "log/logger.h"

void Buff001170::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j9 = Ground::addj9(ground, des, 9, 5);
    ground->m_group[des/10].m_item[des%10].j[9] += j9;
}

void Buff001170::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[9] -= j9;
}
