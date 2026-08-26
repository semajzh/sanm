#include "method0013822.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0013822.h"
#include "log/logger.h"


Method0013822::Method0013822()
{
    type = 2222;
    id = 13822;
    luck = 50;
}

Method0013822::~Method0013822()
{

}

int Method0013822::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 50;
    return luck;
}

int Method0013822::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0013822(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 300, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}

bool Method0013822::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 13822)
        {
            return true;
        }
    }
    return false;
}
