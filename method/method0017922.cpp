#include "method0017922.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0017922.h"
#include "log/logger.h"

Method0017922::Method0017922()
{
    type = 2222;
    id = 17922;
    luck = 50;
}

Method0017922::~Method0017922()
{

}

int Method0017922::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 50;
    return luck;
}

int Method0017922::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0017922(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00179221(item1->g[0], item1->g[0], id, 2));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0141, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 506);
    }

    return 1;
}

bool Method0017922::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 17922)
        {
            return true;
        }
    }
    return false;
}
