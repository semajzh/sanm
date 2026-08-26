#include "method1091120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1091120.h"
#include "log/logger.h"

Method1091120::Method1091120()
{
    type = 20;
    id = 1091120;
}

Method1091120::~Method1091120()
{

}

int Method1091120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10911201(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[5][item1->g[0]], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10911202(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

