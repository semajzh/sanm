#include "buff001630.h"
#include "ground.h"
#include "log/logger.h"

void Buff001630::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        j2 = 5.5;
        ground->m_group[des/10].m_item[des%10].j[2] += j2;
    }
}

void Buff001630::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
    j2 = 0;
}

void Buff001630::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].j[2] -= j2;
        j2 = 0;
    }
}


