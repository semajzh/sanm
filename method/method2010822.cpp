#include "method2010822.h"
#include "ground.h"
#include "item.h"
#include "buff/buff012.h"
#include "buff/buff013.h"
#include "log/logger.h"

Method2010822::Method2010822()
{
    type = 22;
    id = 2010822;
    luck = 65;
}

Method2010822::~Method2010822()
{

}

int Method2010822::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    bool b201082 = check201082(ground, item1->g[0]);
    float point = point1 * (1 + (b201082 ? 0.1 : 0));

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        if (b201082)
        {
            Ground::actml(ground, item1, &item2, id, point);
            Ground::actml(ground, item1, &item2, id, point);
        }
        else
        {
            Ground::actml(ground, item1, &item2, id, point);
            Ground::actbr(ground, item1, &item2, id, point);
        }
        if (item2.i[0] > item2.i[1])
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
        else
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method2010822::check201082(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201082)
        {
            return true;
        }
    }
    return false;
}
