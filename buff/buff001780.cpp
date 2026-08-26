#include "buff001780.h"
#include "ground.h"
#include "log/logger.h"

void Buff001780::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 1)
    {
        j13 = 9;
        ground->m_group[des/10].m_item[des%10].j[13] += j13;
    }
}

void Buff001780::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
    j13 = 0;
}

void Buff001780::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 1)
    {
        ground->m_group[des/10].m_item[des%10].j[13] -= j13;
        j13 = 0;
    }
}
