#include "buff301051.h"
#include "ground.h"
#include "log/logger.h"

void Buff301051::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        j6 = 12;
        ground->m_group[des/10].m_item[des%10].j[6] += j6;
    }
}

void Buff301051::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[12] -= j6;
    j6 = 0;
}

void Buff301051::run(Ground* ground)
{
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].j[6] -= j6;
        j6 = 0;
    }
}
