#include "buff7000321.h"
#include "ground.h"
#include "log/logger.h"

void Buff7000321::run(Ground* ground, int )
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, 30);
    }
}
