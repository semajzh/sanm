#include "buff0016620.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0016620::run(Ground* ground, float point)
{
    float point1 = point * 92 / 100;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021);
    for (int obj : objs)
    {
        Ground::actcd(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}
