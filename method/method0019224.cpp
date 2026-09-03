#include "method0019224.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0019224::Method0019224()
{
    type = 2224;
    id = 19224;
    luck = 40;
}

Method0019224::~Method0019224()
{

}

int Method0019224::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0241);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 287.5f);
    }

    return 1;
}
