#include "buff001410.h"
#include "ground.h"
#include "log/logger.h"

void Buff001410::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] += 8;
}

void Buff001410::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] -= 8;
}

