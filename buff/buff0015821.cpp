#include "buff0015821.h"
#include "ground.h"
#include "log/logger.h"

void Buff0015821::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }

    float point1 = 115;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0022);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}
