#include "method0040424.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0040424::Method0040424()
{
    type = 2224;
    id = 40424;
    luck = 50;
}

Method0040424::~Method0040424()
{

}

int Method0040424::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 160, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x4040);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x6040);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}

