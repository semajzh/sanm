#include "buff001110.h"
#include "ground.h"
#include "log/logger.h"

void Buff001110::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] += 3.5;
}

void Buff001110::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= 3.5;
}
