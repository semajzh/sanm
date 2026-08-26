#include "buff0012620.h"
#include "ground.h"
#include "log/logger.h"

void Buff0012620::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 50, src, method);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x12, des);
    for (int obj : objs)
    {
        Ground::hloi(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point1, (item1.i[1] + item1.i[2]) / 2);
    }
}
