#include "buff101091.h"
#include "ground.h"
#include "log/logger.h"

void Buff101091::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j1 = 12 + ground->m_group[src/10].m_item[src%10].i[3] / 16;
    ground->m_group[des/10].m_item[des%10].j[1] += j1;
}

void Buff101091::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] -= j1;
}
