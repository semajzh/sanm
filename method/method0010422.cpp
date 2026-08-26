#include "method0010422.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0010422::Method0010422()
{
    type = 2222;
    id = 10422;
    luck = 50;
}

Method0010422::~Method0010422()
{

}

int Method0010422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
//    float point1 = Ground::pointbystar(ground, 100, item1->g[0], id);
//    float point2 = Ground::pointbystar(ground, 140, item1->g[0], id);
    float point1 = Ground::pointbystar(ground, 110, item1->g[0], id);
    for (int n = 0; n < 4; ++n)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
        for (int obj : objs)
        {
//            float point = point1 + qrand() % int(point2 - point1 + 1);
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, false, 25);
        }
    }

    return 1;
}
