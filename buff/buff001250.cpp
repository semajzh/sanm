#include "buff001250.h"
#include "ground.h"
#include "log/logger.h"

void Buff001250::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += 5;
}

void Buff001250::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= 5;
}

