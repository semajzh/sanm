#include "buff001130.h"
#include "ground.h"
#include "log/logger.h"

void Buff001130::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] += 3;
}

void Buff001130::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= 3;
}
