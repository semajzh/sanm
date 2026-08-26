#include "buffs600.h"
#include "ground.h"
#include "log/logger.h"

float BuffS600A::run(Ground* ground, int pos)
{
    if (Ground::exsize(ground, pos) > 0)
    {
        return 5.0f;
    }
    return 0.0f;
}

void BuffS600B::run(Ground* ground)
{
    if (++count < 8)
    {
        return;
    }
    count = 0;
    QVector<int> objs1 = Ground::selectObjN(ground, des, 0x3010);
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x22);
    for (int obj1 : objs1)
    {
        for (int obj2 : objs2)
        {
            Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], 600, 90);
        }
    }
}

