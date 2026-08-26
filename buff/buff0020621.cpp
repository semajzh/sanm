#include "buff0020621.h"
#include "ground.h"
#include "log/logger.h"

void Buff00206211::run(Ground* ground)
{
    if (ground->m_round < 2 || qrand() % 100 + 1 <= 100 - 65)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 150, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x12);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

void Buff00206212::run(Ground* ground)
{
    if (ground->m_round < 2 || qrand() % 100 + 1 <= 100 - 65)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 150, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}
