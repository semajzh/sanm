#include "buff401023.h"
#include "ground.h"
#include "log/logger.h"

void Buff401023::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[5] += 25;
    ground->m_group[des/10].m_item[des%10].k[5] -= 100;
}

void Buff401023::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[5] -= 25;
    ground->m_group[des/10].m_item[des%10].k[5] += 100;
}
