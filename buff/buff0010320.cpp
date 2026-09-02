#include "buff0010320.h"
#include "ground.h"
#include "log/logger.h"

void Buff0010320::run(Ground* ground, int obj, float point)
{
    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 100, src, method);
    float point2 = Ground::pointbystar(ground, 30, src, method);

    QVector<int> objs = Ground::selectObjN(ground, obj, 0x12, obj);
    for (int obj : objs)
    {
        Ground::actcd(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point * point1 / 100);
    }

    if (ground->m_group[des/10].m_item[des%10].i[0] > ground->m_group[obj/10].m_item[obj%10].i[0])
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
    }
}
