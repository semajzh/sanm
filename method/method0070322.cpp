#include "method0070322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff013.h"
#include "log/logger.h"


Method0070322::Method0070322()
{
    type = 2222;
    id = 70322;
    luck = 50;
}

Method0070322::~Method0070322()
{

}

int Method0070322::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 75, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return 1;
    }
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
