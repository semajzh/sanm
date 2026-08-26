#include "buff001550.h"
#include "ground.h"
#include "log/logger.h"

void Buff001550::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k2 = Ground::addkn(ground, des, 2, 3.5);
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff001550::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}


