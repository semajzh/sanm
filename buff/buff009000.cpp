#include "buff009000.h"
#include "ground.h"
#include "log/logger.h"

void Buff009000::run(Ground* ground, int obj, int m, float point)
{
    if (m % 100 != 22 || qrand() % 100 + 1 <= 100 - 75)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0221, obj);
    for (int obj : objs)
    {
        Ground::actcd(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], 9000, point * 0.5);
    }
}
