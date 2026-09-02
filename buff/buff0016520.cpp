#include "buff0016520.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0016520::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0023);
    for (int obj : objs)
    {
        if (Ground::exsize(ground, obj, 1) <= 0)
        {
            continue;
        }
        if (qrand() % 100 + 1 <= 100 - 60)
        {
            continue;
        }
        Ground::actbr(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, 138);
    }
}
