#include "method9070124.h"
#include "ground.h"
#include "item.h"
#include "buff/buff9070124.h"
#include "log/logger.h"

Method9070124::Method9070124()
{
    type = 2224;
    id = 9070124;
    luck = 75;
}

Method9070124::~Method9070124()
{

}

int Method9070124::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 40, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 12, item1->g[0], id);
    float point = point1 + (ground->m_round - 1) * point2;
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff9070124(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    return 1;
}
