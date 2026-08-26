#include "method3011122.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method3011122::Method3011122()
{
    type = 2222;
    id = 3011122;
    luck = 65;
}

Method3011122::~Method3011122()
{

}

int Method3011122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 250, item1->g[0], id);
//    float point2 = Ground::pointbystar(ground, 50, item1->g[0], id);
    float point3 = Ground::pointbystar(ground, 65, item1->g[0], id);
//    float point4 = Ground::pointbystar(ground, 30, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x0031, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        Ground::hloi(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point3, item1->i[0]);
    }

    return 1;
}
