#include "buff0011922.h"
#include "ground.h"
#include "log/logger.h"

void Buff0011922::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j7 = Ground::pointbystar(ground, 45, src, method);
    ground->m_group[des/10].m_item[des%10].j[7] += j7;
    ground->m_group[des/10].m_item[des%10].j[11] += 20;
}

void Buff0011922::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
    ground->m_group[des/10].m_item[des%10].j[11] -= 20;
}
