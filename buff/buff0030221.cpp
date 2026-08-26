#include "buff0030221.h"
#include "ground.h"
#include "log/logger.h"

void Buff0030221::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 90, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x11, des);
    objs.insert(0, des);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    for (int obj : objs)
    {
        Ground::hloi(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point1, item1.i[1] + item1.i[2]); //119.54,351.95,95.4,320
    }
}
