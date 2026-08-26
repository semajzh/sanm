#include "buff001760.h"
#include "ground.h"
#include "log/logger.h"

void Buff001760::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] += 6;
}

void Buff001760::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= 6;
}


