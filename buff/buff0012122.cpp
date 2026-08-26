#include "buff0012122.h"
#include "ground.h"
#include "log/logger.h"

void Buff0012122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] += 20;
}

void Buff0012122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= 20;
}
