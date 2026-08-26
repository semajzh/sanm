#include "method2010622.h"
#include "ground.h"
#include "item.h"
#include "buff/buff002.h"
#include "buff/buff011.h"
#include "log/logger.h"

Method2010622::Method2010622()
{
    type = 22;
    id = 2010622;
    luck = 55;
}

Method2010622::~Method2010622()
{

}

int Method2010622::getLuck(Ground* ground, Item* item1)
{
    luck = check201061(ground, item1->g[0]) ? 100 : 55;
    return luck;
}

int Method2010622::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 140, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 30, item1->g[0], id);

    bool b201061 = check201061(ground, item1->g[0]);
    float point = point1 * (b201061 ? 0.65f : 1);
    int jl = b201061 ? 12 : point2;
    bool b011 = qrand() % 100 + 1 > 100 - jl;

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        bool b002 = check002(ground, obj);

        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        if (b002 && b011)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method2010622::check201061(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201061)
        {
            return true;
        }
    }
    return false;
}

bool Method2010622::check002(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 2)
        {
            return true;
        }
    }
    return false;
}
