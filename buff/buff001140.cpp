#include "buff001140.h"
#include "ground.h"
#include "log/logger.h"

void Buff001140::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] += 5;
}

void Buff001140::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= 5;
}
