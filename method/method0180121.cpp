#include "method0180121.h"
#include "ground.h"
#include "buff/buff0180121.h"
#include "log/logger.h"

Method0180121::Method0180121()
{
    type = 21;
    id = 180121;
}

Method0180121::~Method0180121()
{
}

int Method0180121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff01801211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
        QSharedPointer<Buff> buff2(new Buff01801212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[4][obj], buff2);
    }
    return 1;
}
