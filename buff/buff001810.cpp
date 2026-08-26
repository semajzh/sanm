#include "buff001810.h"
#include "ground.h"
#include "log/logger.h"

void Buff001810::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[12] += 5;
}

void Buff001810::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[12] -= 5;
}
