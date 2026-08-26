#include "buff2010520.h"
#include "ground.h"
#include "log/logger.h"

void Buff2010520::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j0 = Ground::pointbystar(ground, 45, src, method);
    ground->m_group[des/10].m_item[des%10].j[0] += j0;
}

void Buff2010520::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
}

void Buff2010520::run(Ground* ground, int obj)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    float point1 = Ground::pointbystar(ground, 60, src, method);
    float k12 = ground->exceptions[obj].size() > 0 ? 20 : 0;
    if (count++ < 5)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1, true, -999, k12);
    }
}
