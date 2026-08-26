#include "method6000122.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method6000122::Method6000122()
{
    type = 22;
    id = 6000122;
    luck = 100;
}

Method6000122::~Method6000122()
{

}

int Method6000122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0243, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 100);
    }

    return 1;
}
