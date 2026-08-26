#include "buff401121.h"
#include "ground.h"
#include "log/logger.h"

void Buff401121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k5 = Ground::addkn(ground, des, 5, 10);
    j13 = Ground::addjn(ground, des, 13, 6);
    ground->m_group[des/10].m_item[des%10].k[5] += k5;
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
}

void Buff401121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}
