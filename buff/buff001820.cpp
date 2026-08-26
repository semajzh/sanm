#include "buff001820.h"
#include "ground.h"
#include "log/logger.h"

void Buff001820::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        j12 = 9;
        ground->m_group[des/10].m_item[des%10].j[12] += j12;
    }
}

void Buff001820::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[12] -= j12;
    j12 = 0;
}

void Buff001820::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].j[12] -= j12;
        j12 = 0;
    }
}


