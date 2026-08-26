#include "buff101032.h"
#include "ground.h"
#include "log/logger.h"

void Buff101032::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j13 = Ground::addjn(ground, des, 13, 7);
    k8 = Ground::addkn(ground, des, 8, 10);
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
    ground->m_group[des/10].m_item[des%10].k[8] += k8;
}

void Buff101032::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
    ground->m_group[des/10].m_item[des%10].k[8] -= k8;
}
