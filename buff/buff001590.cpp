#include "buff001590.h"
#include "ground.h"
#include "log/logger.h"

void Buff001590::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] += 5;
}

void Buff001590::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= 5;
}


