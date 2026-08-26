#include "buff500003.h"
#include "ground.h"
#include "log/logger.h"

void Buff500003::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] += 100;
}

void Buff500003::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= 100;
}
