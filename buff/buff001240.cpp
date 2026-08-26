#include "buff001240.h"
#include "ground.h"
#include "log/logger.h"

void Buff001240::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        k2 = Ground::addkn(ground, des, 2, 9);
        ground->m_group[des/10].m_item[des%10].k[2] += k2;
    }
}

void Buff001240::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
    k2 = 0;
}

void Buff001240::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].k[2] -= k2;
        k2 = 0;
    }
}

