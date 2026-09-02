#include "buff0110120.h"
#include "ground.h"
#include "log/logger.h"

void Buff0110120::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 15, src, method);
    j13 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].j[9], 100);
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
}

void Buff0110120::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}

void Buff0110120::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (count > 5)
    {
        count = 5;
    }
    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point = point1 + count * 10;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        if (ground->m_group[des/10].m_item[des%10].i[0] >= ground->m_group[des/10].m_item[des%10].i[1])
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
        else
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
    }
}

void Buff0110120::run(Ground* ground, int )
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    ++count;
}
