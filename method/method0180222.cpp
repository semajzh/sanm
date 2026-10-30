#include "method0180222.h"
#include "ground.h"
#include "buff/buff0180222.h"
#include "log/logger.h"

Method0180222::Method0180222()
{
    type = 2222;
    id = 180222;
    luck = 60;
}

Method0180222::~Method0180222()
{
}

int Method0180222::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 60;
    return luck;
}

int Method0180222::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff(new Buff0180222(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff1(new Buff01802221(item1->g[0], item1->g[0], id, 2));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff1);

    float point1 = Ground::pointbystar(ground, 6, item1->g[0], id);
    float point2 = Ground::addbyix(ground, point1, item1->i[1]);
    float point3 = Ground::pointbystar(ground, 300, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff01802222(item1->g[0], item1->g[0], id, 2, point2*1000));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);

        QSharedPointer<Buff> debuff(new Buff01802223(item1->g[0], obj, id, 2, point2*1000));
        Ground::addBuff(ground, ground->buff[1][obj], debuff);

        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point3);
    }

    return 1;
}
