#include "method0011121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff011.h"
#include "buff/buff111.h"
#include "buff/buff0011121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0011121::Method0011121()
{
    type = 21;
    id = 11121;
}

Method0011121::~Method0011121()
{

}

int Method0011121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011121(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    return 1;
}

