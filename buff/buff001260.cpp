#include "buff001260.h"
#include "ground.h"
#include "log/logger.h"

void Buff001260::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += 6;
}

void Buff001260::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= 6;
}
