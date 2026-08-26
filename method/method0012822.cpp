#include "method0012822.h"
#include "ground.h"
#include "item.h"
#include "buff/buff012.h"
#include "buff/buff013.h"
#include "buff/buff017.h"
#include "log/logger.h"
#include <QDebug>

Method0012822::Method0012822()
{
    type = 2222;
    id = 12822;
    luck = 50;
}

Method0012822::~Method0012822()
{

}

int Method0012822::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 140, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 6, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        if (qrand() % 100 + 1 <= 100 - 40)
        {
            continue;
        }
        if (check001(ground, obj))
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
        if (check004(ground, obj))
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
        if (check003(ground, obj))
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0012822::check001(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 1)
        {
            return true;
        }
    }
    return false;
}

bool Method0012822::check003(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 3)
        {
            return true;
        }
    }
    return false;
}

bool Method0012822::check004(Ground* ground, int obj)
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

