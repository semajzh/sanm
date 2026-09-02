#include "method0011522.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0011522.h"
#include "buff/buff011.h"
#include "log/logger.h"


Method0011522::Method0011522()
{
    type = 2222;
    id = 11522;
    luck = 40;
}

Method0011522::~Method0011522()
{

}

int Method0011522::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 40;
    return luck;
}

int Method0011522::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011522(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 250, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 25, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        int n = checkex(ground, obj);
        float point = point1 + 25 * n;
        bool b011 = (qrand() % 100 + 1 > 100 - (point2 + 8 * n));

        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point);
        if (b011)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0011522::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 11522)
        {
            return true;
        }
    }
    return false;
}

int Method0011522::checkex(Ground* ground, int obj)
{
    int count = Ground::exsize(ground, obj, 1);
    return (count > 5 ? 5 : count);
}

