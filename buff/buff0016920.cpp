#include "buff0016920.h"
#include "ground.h"
#include "log/logger.h"

void Buff0016920::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[5] += 9.2;
    ground->m_group[des/10].m_item[des%10].k[4] += 17.25;
}

void Buff0016920::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[5] -= 9.2;
    ground->m_group[des/10].m_item[des%10].k[4] -= 17.25;
}
