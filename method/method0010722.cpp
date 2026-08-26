#include "method0010722.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0010722.h"
#include "log/logger.h"


Method0010722::Method0010722()
{
    type = 2222;
    id = 10722;
    luck = 55;
}

Method0010722::~Method0010722()
{

}

int Method0010722::getLuck(Ground* ground, Item* item)
{
    return checkzb(ground, item->g[0]) ? 999 : luck;
}

int Method0010722::run(Ground* ground, Item* item1)
{
    if (ground->m_round != 1 && ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0010722(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 450, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00107222(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}

bool Method0010722::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 10722)
        {
            return true;
        }
    }
    return false;
}
