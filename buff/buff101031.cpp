#include "buff101031.h"
#include "ground.h"
#include "log/logger.h"

void Buff101031::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k8 = Ground::addkn(ground, des, 8, 20);
    ground->m_group[des/10].m_item[des%10].i[0] += 10;
    ground->m_group[des/10].m_item[des%10].k[8] += k8;
}

void Buff101031::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= 10;
    ground->m_group[des/10].m_item[des%10].k[8] -= k8;
}
