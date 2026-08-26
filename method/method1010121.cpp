#include "method1010121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1010121::Method1010121()
{
    type = 21;
    id = 1010121;
}

Method1010121::~Method1010121()
{

}

int Method1010121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10101211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x5010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10101212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

