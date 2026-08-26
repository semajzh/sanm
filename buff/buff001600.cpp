#include "buff001600.h"
#include "ground.h"
#include "log/logger.h"

void Buff001600::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 1)
    {
        j0 = 5.5;
        ground->m_group[des/10].m_item[des%10].j[0] += j0;
    }
}

void Buff001600::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
    j0 = 0;
}

void Buff001600::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 1)
    {
        ground->m_group[des/10].m_item[des%10].j[0] -= j0;
        j0 = 0;
    }
}
