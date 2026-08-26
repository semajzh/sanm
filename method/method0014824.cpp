#include "method0014824.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0014824::Method0014824()
{
    type = 2224;
    id = 14824;
    luck = 40;
}

Method0014824::~Method0014824()
{

}

int Method0014824::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 280, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 100, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x8040);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        float point = point1 + (item1->i[3] - item2.i[3]) / 5;
        Ground::actbr(ground, item1, &item2, id, point);

        if (item2.g[1] == 1)
        {
            Ground::actbr(ground, item1, &item2, id, point2);
        }
    }

    return 1;
}

