#include "buff5000220.h"
#include "ground.h"
#include "log/logger.h"

void Buff5000220::run(Ground* , float point)
{
    qi += point;
}

bool Buff5000220::run(Ground* ground, int )
{
    if (qi < 2000)
    {
        return false;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013);
    for (int obj : objs)
    {
        Ground::exremove(ground, obj, Ground::exsize(ground, obj));
        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 500);
    }
    qi -= 2000;
    return true;
}
