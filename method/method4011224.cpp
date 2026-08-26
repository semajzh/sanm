#include "method4011224.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method4011224::Method4011224()
{
    type = 2224;
    id = 4011224;
    luck = 100;
}

Method4011224::~Method4011224()
{

}

int Method4011224::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 1;
    }

    float point1 = Ground::pointbystar(ground, 150, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 70, item1->g[0], id);
    Item& item2 = ground->m_group[obj/10].m_item[obj%10];
    Ground::actbr(ground, item1, &item2, id, point1);
    if (item1->i[0] > item2.i[0])
    {
        Ground::actbr(ground, item1, &item2, id, point2);
    }

    return 1;
}

