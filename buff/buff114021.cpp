#include "buff114021.h"
#include "ground.h"
#include "log/logger.h"

void Buff114021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] += 5;
}

void Buff114021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= 5;
}
