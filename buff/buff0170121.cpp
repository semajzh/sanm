#include "buff0170121.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

bool Buff0170121::run(Ground* ground, float& point)
{
    if (ground->m_round > 2)
    {
        return false;
    }
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return false;
    }
    float point1 = Ground::pointbystar(ground, 20, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    point *= 1 - point2/100;
    return true;
}

void Buff0170121::run(Ground* ground, int )
{
    if (ground->m_round < 3 || ground->m_round > 4)
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 4)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 80, src, method);
    Item& item1 = ground->m_group[src/10].m_item[src%10];
    Ground::hloi1(ground, &item1, &ground->m_group[des/10].m_item[des%10], method, point1);
}
