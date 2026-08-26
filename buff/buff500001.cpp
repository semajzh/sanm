#include "buff500001.h"
#include "ground.h"
#include "log/logger.h"

void Buff500001::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j0 = ground->m_group[des/10].m_item[des%10].i[3] / 6;
    j7 = ground->m_group[des/10].m_item[des%10].i[3] / 6;
    ground->m_group[des/10].m_item[des%10].j[0] += j0;
    ground->m_group[des/10].m_item[des%10].j[7] += j7;
    ground->m_group[des/10].m_item[des%10].j[8] += 100;
}

void Buff500001::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
    ground->m_group[des/10].m_item[des%10].j[8] -= 100;
}
