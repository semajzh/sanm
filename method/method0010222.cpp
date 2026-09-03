#include "method0010222.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0010222::Method0010222()
{
    type = 2222;
    id = 10222;
    luck = 65;
}

Method0010222::~Method0010222()
{

}

int Method0010222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1040);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x3040);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}
