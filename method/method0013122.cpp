#include "method0013122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0013122.h"
#include "buff/buff017.h"
#include "log/logger.h"


Method0013122::Method0013122()
{
    type = 2222;
    id = 13122;
    luck = 50;
}

Method0013122::~Method0013122()
{

}

int Method0013122::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 50;
    return luck;
}

int Method0013122::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0013122(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        if (check001(ground, obj))
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0013122::check001(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 1)
        {
            return true;
        }
    }
    return false;
}

bool Method0013122::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 13122)
        {
            return true;
        }
    }
    return false;
}
