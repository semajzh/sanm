#include "buff401056.h"
#include "ground.h"
#include "log/logger.h"

void Buff401056::run(Ground* ground, int m, float point)
{
    if (m % 100 != 24)
    {
        return;
    }

    float maxi = Ground::getMaxi(ground, src);
    float p = point * Ground::addbyix(ground, 10, maxi) / 100;
    QVector<int> objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj : objs)
    {
        Ground::hlo(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, p);
    }
}
