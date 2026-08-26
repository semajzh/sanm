#include "method1090121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1090121.h"
#include "log/logger.h"
#include <cmath>

Method1090121::Method1090121()
{
    type = 21;
    id = 1090121;
}

Method1090121::~Method1090121()
{

}

int Method1090121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x22);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10901211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);

        QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff10901212(item1->g[0], item1->g[0], id));
        Ground::addBuff(ground, ground->buff[0][item1->g[0]], buff1);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x8010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10901213(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[2][obj], buff);
    }

    return 1;
}
