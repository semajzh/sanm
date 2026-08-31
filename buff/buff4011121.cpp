#include "buff4011121.h"
#include "ground.h"
#include "log/logger.h"

void Buff4011121::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 75, src, method);

    QVector<int> objs1 = Ground::selectObjN(ground, des, 0x1010);
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x2020);
    if (objs1.size() > 0 && objs2.size() > 0)
    {
        int obj1 = objs1.front();
        int obj2 = objs2.front();
        Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1);
        Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1);
    }

    objs1 = Ground::selectObjN(ground, des, 0x3010);
    objs2 = Ground::selectObjN(ground, des, 0x4020);
    if (objs1.size() > 0 && objs2.size() > 0)
    {
        int obj1 = objs1.front();
        int obj2 = objs2.front();
        Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1);
        Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1);
    }

    objs1 = Ground::selectObjN(ground, des, 0x7010);
    objs2 = Ground::selectObjN(ground, des, 0x8020);
    if (objs1.size() > 0 && objs2.size() > 0)
    {
        int obj1 = objs1.front();
        int obj2 = objs2.front();
        Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1);
        Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1);
    }
}
