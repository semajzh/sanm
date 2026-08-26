#include "method0017822.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101.h"
#include "buff/buff016.h"
#include "buff/buff0017822.h"
#include "log/logger.h"

Method0017822::Method0017822()
{
    type = 2222;
    id = 17822;
    luck = 35;
}

Method0017822::~Method0017822()
{

}

int Method0017822::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 35;
    return luck;
}

int Method0017822::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0017822(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 253);
        if (check016(ground, obj))
        {
            Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 57.5);;
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

bool Method0017822::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 17822)
        {
            return true;
        }
    }
    return false;
}

bool Method0017822::check016(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 16)
        {
            return true;
        }
    }
    return false;
}
