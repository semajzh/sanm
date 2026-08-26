#include "buff5000320.h"
#include "ground.h"
#include "log/logger.h"

void Buff5000320::run(Ground* , float point)
{
    qi += point;
}

bool Buff5000320::run(Ground* ground, int )
{
    if (qi < 2000)
    {
        return false;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021);
    for (int obj : objs)
    {
        Ground::actcd(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, ground->m_group[obj/10].m_item[obj%10].h[0] * 0.5f);
    }
    qi -= 2000;
    return true;
}
