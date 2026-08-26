#include "method0120222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "buff/buff003.h"
#include "buff/buff0120222.h"
#include "log/logger.h"

Method0120222::Method0120222()
{
    type = 2222;
    id = 120222;
    luck = 70;
}

Method0120222::~Method0120222()
{

}

int Method0120222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        bool b003 = check003(ground, obj);
        bool b001 = check001(ground, obj);

        QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff003(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff1);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff001(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);

        if (b003)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01202223(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }

        if (b001)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01202221(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0120222::check003(Ground* ground, int obj)
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

bool Method0120222::check001(Ground* ground, int obj)
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
