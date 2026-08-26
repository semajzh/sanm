#include "method4030124.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4030124.h"
#include "log/logger.h"


Method4030124::Method4030124()
{
    type = 2224;
    id = 4030124;
    luck = 50;
}

Method4030124::~Method4030124()
{

}

int Method4030124::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 140, item1->g[0], id);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4030124(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        float point = point1 + (item1->i[3] - item2.i[3]) / 5;
        Ground::actbr(ground, item1, &item2, id, point);
        Ground::actml(ground, item1, &item2, id, point);
    }

    return 1;
}

