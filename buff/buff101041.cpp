#include "buff101041.h"
#include "ground.h"
#include "log/logger.h"

void Buff101041::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] += 5;
    ground->m_group[des/10].m_item[des%10].k[5] += 12;
}

void Buff101041::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= 5;
    ground->m_group[des/10].m_item[des%10].k[5] -= 12;
}
