#include "method0014321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014321.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0014321::Method0014321()
{
    type = 21;
    id = 14321;
}

Method0014321::~Method0014321()
{

}

int Method0014321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00143211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00143212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x5010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00143213(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

