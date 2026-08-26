#include "method0050121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0050121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0050121::Method0050121()
{
    type = 21;
    id = 50121;
}

Method0050121::~Method0050121()
{

}

int Method0050121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1020);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00501211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x3020);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00501212(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return 1;
}

