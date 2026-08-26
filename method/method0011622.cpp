#include "method0011622.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101.h"
#include "buff/buff004.h"
#include "buff/buff0011622.h"
#include "log/logger.h"


Method0011622::Method0011622()
{
    type = 2222;
    id = 11622;
    luck = 50;
}

Method0011622::~Method0011622()
{

}

int Method0011622::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 50;
    return luck;
}

int Method0011622::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011622(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 160, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 40, item1->g[0], id);
    for (int n = 0; n < 5; ++n)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
        for (int obj : objs)
        {
            float point = check004(ground, obj) ? point2 : 0;
            Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, 0, point);
        }
    }

    return 1;
}

bool Method0011622::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 11622)
        {
            return true;
        }
    }
    return false;
}

bool Method0011622::check004(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 4)
        {
            return true;
        }
    }
    return false;
}
