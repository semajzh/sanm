#include "buff001270.h"
#include "ground.h"
#include "log/logger.h"

void Buff001270::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[11] += 8;
}

void Buff001270::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[11] -= 8;
}
