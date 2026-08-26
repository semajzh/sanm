#include "buff0016420.h"
#include "ground.h"
#include "log/logger.h"

void Buff0016420::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 2)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 126.5f);
    }
}
