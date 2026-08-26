#include "buff0080121.h"
#include "ground.h"
#include "log/logger.h"

void Buff00801211::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 90, src, method);
    float hlo = Ground::getDataHlo(ground, des);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1 + hlo / 25); //0-664;929-934
    }
}

void Buff00801212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 50, src, method);
    QVector<int> objs = selectObj(ground);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

QVector<int> Buff00801212::selectObj(Ground* ground)
{
    QVector<int> objs;
    int g = des / 10;
    for (int i = 0; i < 3; ++i)
    {
        Item& item = ground->m_group[g].m_item[i];
        if (item.h[0] > 0 && item.g[1] == 0)
        {
            objs.append(item.g[0]);
        }
    }
    return objs;
}
