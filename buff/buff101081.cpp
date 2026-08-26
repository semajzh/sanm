#include "buff101081.h"
#include "ground.h"
#include "log/logger.h"

void Buff101081::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] += 6;
    ground->m_group[des/10].m_item[des%10].j[3] += 10;
}

void Buff101081::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= 6;
    ground->m_group[des/10].m_item[des%10].j[3] -= 10;
}
