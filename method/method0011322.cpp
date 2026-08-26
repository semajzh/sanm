#include "method0011322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0011322.h"
#include "buff/buff004.h"
#include "buff/buff012.h"
#include "buff/buff013.h"
#include "log/logger.h"


Method0011322::Method0011322()
{
    type = 2222;
    id = 11322;
    luck = 40;
}

Method0011322::~Method0011322()
{

}

int Method0011322::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 40;
    return luck;
}

int Method0011322::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011322(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 260, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 65, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

        if (qrand() % 100 + 1 > 100 - point2)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
        if (qrand() % 100 + 1 > 100 - point2)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0011322::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 11322)
        {
            return true;
        }
    }
    return false;
}
