#include "method6000124.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method6000124::Method6000124()
{
    type = 24;
    id = 6000124;
    luck = 100;
}

Method6000124::~Method6000124()
{

}

int Method6000124::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    for (int n = 0; n < 3; ++n)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0141, item1->g[0]);
        for (int obj : objs)
        {
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 100);
        }
    }

    return 1;
}
