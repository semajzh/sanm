#include "buff4091121.h"
#include "ground.h"
#include "log/logger.h"

void Buff4091121::run(Ground* ground)
{
    QVector<int> objs1 = Ground::selectObjN(ground, des, 0x1010);
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x2020);
    if (objs1.size() > 0 && objs2.size() > 0)
    {
        int obj1 = objs1.front();
        int obj2 = objs2.front();
        hlo(ground, Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 75));
        hlo(ground, Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 75));
    }

    objs1 = Ground::selectObjN(ground, des, 0x3010);
    objs2 = Ground::selectObjN(ground, des, 0x4020);
    if (objs1.size() > 0 && objs2.size() > 0)
    {
        int obj1 = objs1.front();
        int obj2 = objs2.front();
        hlo(ground, Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 75));
        hlo(ground, Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 75));
    }

    objs1 = Ground::selectObjN(ground, des, 0x5010);
    objs2 = Ground::selectObjN(ground, des, 0x6020);
    if (objs1.size() > 0 && objs2.size() > 0)
    {
        int obj1 = objs1.front();
        int obj2 = objs2.front();
        hlo(ground, Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 75));
        hlo(ground, Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 75));
    }
}

void Buff4091121::hlo(Ground* ground, int point)
{
    if (point < 0)
    {
        return;
    }
    point = point % J02_FLAG_1;
    QVector<int> objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj : objs)
    {
        Item& item1 = ground->m_group[src/10].m_item[src%10];
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::hlo(ground, &item1, &item2, 4091121, point * (20 + item1.i[2]/20) / 100); //
    }
}
