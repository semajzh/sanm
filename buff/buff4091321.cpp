#include "buff4091321.h"
#include "ground.h"
#include "log/logger.h"

void Buff4091321::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    // 255.3, 16.4=>23.67
    j0 = 16 + ground->m_group[src/10].m_item[src%10].i[3] / 30;
    j2 = 16 + ground->m_group[src/10].m_item[src%10].i[3] / 30;
    ground->m_group[des/10].m_item[des%10].j[0] += j0;
    ground->m_group[des/10].m_item[des%10].j[2] += j2;
}

void Buff4091321::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
}

bool Buff4091321::run(Ground* ground, int m)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        method = 0;
    }

    float jl = 35 + ground->m_group[src/10].m_item[src%10].i[3] / 30;
    if (m == method || qrand() % 100 + 1 <= 100 - jl)
    {
        return false;
    }

    method = m;
    Logger::H().printcustom(ground, 4091321, des, 4091321, method);
    return true;
}
