#include "buff201051.h"
#include "ground.h"
#include "log/logger.h"

void Buff201051::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] += 6;
    ground->m_group[des/10].m_item[des%10].j[1] += 10;
}

void Buff201051::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= 6;
    ground->m_group[des/10].m_item[des%10].j[1] -= 10;
}
