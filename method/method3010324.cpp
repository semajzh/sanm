#include "method3010324.h"
#include "ground.h"
#include "item.h"
#include "buff/buff.h"
#include "log/logger.h"
#include <QDebug>

Method3010324::Method3010324()
{
    type = 2224;
    id = 3010324;
    luck = 65;
}

Method3010324::~Method3010324()
{

}

int Method3010324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 320, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 50, item1->g[0], id);
    int f1 = 0;
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        if (ground->m_group[obj/10].m_item[obj%10].f[1] == 0)
        {
            ++f1;
        }
    }
    bool g1 = (qrand() % 100 + 1 > 100 - 75);
    objs = Ground::selectObjN(ground, item1->g[0], 0x0141 + (g1 ? 1 : 0) * 0x0100, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1 + f1 * point2);
    }

    return 1;
}
