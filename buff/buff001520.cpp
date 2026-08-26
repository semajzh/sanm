#include "buff001520.h"
#include "ground.h"
#include "log/logger.h"

void Buff001520::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] += 3.5;
}

void Buff001520::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] -= 3.5;
}

