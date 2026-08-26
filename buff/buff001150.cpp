#include "buff001150.h"
#include "ground.h"
#include "log/logger.h"

void Buff001150::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[17] += 20;
}

void Buff001150::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[17] -= 20;
}
