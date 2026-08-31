#include "buff0015921.h"
#include "ground.h"
#include "log/logger.h"

void Buff0015921::run(Ground* ground)
{
    float point1 = 138;
    float point2 = 10;
    float point = point1 * (1 + (ground->m_round - 1) * point2 / 100);

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
    }
}
