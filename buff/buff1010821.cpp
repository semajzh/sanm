#include "buff1010821.h"
#include "ground.h"
#include "log/logger.h"

void Buff10108211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 25, src, method);
    j2 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 16; //365.23,47.92
    j14 = j2;
    ground->m_group[des/10].m_item[des%10].j[2] += j2;
    ground->m_group[des/10].m_item[des%10].j[14] += j14;
}

void Buff10108211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
    ground->m_group[des/10].m_item[des%10].j[14] -= j14;
}

bool Buff10108212::run(Ground* ground, float& point)
{
    float point1 = Ground::pointbystar(ground, 30, src, method);
    float jl = point1 + ground->m_group[src/10].m_item[src%10].j[2];
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return false;
    }
    point *= 2;
    return true;
}
