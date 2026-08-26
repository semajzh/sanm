#include "buff1010221.h"
#include "ground.h"
#include "log/logger.h"

void Buff10102211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j4 = Ground::pointbystar(ground, 6, src, method);
    ground->m_group[des/10].m_item[des%10].j[4] += j4;
}

void Buff10102211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
}

bool Buff10102212::run(Ground* ground, int m)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        method = 0;
    }

    float point1 = Ground::pointbystar(ground, 70, src, method);
    if (m == method || qrand() % 100 + 1 <= 100 - point1)
    {
        return false;
    }

    method = m;
    Logger::H().printcustom(ground, 1010221, des, 1010221, method);
    return true;
}
