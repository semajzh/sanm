#include "buff101141.h"
#include "ground.h"
#include "log/logger.h"

void Buff101141::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k4 = Ground::addkn(ground, des, 4, 6);
    j13 = Ground::addjn(ground, des, 13, 6);
    ground->m_group[des/10].m_item[des%10].k[4] += k4;
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
}

void Buff101141::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[4] -= k4;
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}
