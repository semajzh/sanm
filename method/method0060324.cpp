#include "method0060324.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method0060324::Method0060324()
{
    type = 2224;
    id = 60324;
    luck = 50;
}

Method0060324::~Method0060324()
{

}

int Method0060324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 36, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float k12 = (qrand() % 100 + 1 > 100 - point2 - item1->i[1]/30) ? 20 : 0;
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, k12);
    }

    return 1;
}
