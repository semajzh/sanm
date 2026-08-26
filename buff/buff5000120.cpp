#include "buff5000120.h"
#include "ground.h"
#include "log/logger.h"

void Buff5000120::run(Ground* , float point)
{
    qi += point;
}

bool Buff5000120::run(Ground* ground, int )
{
    if (qi < 2000)
    {
        return false;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0023);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 500);
    }
    qi -= 2000;
    return true;
}
