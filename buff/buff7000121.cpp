#include "buff7000121.h"
#include "ground.h"
#include "log/logger.h"

bool Buff7000121::run(Ground* ground, int )
{
    if (qrand() % 100 + 1 <= 100 - 10)
    {
        return false;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        Ground::acttb(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, 0, 2000);
    }

    return true;
}
