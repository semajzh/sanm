#include "method0019324.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0019324::Method0019324()
{
    type = 2224;
    id = 19324;
    luck = 45;
}

Method0019324::~Method0019324()
{

}

int Method0019324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actbr(ground, item1, &item2, id, 138);
        if (item1->i[3] > item2.i[3])
        {
            Ground::actbr(ground, item1, &item2, id, 57.5f);
        }
    }

    return 1;
}
