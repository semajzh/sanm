#include "buff0016320.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0016320::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0113);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, 103.5f);
    }
}
