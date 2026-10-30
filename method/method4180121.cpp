#include "method4180121.h"
#include "ground.h"
#include "buff/buff4180121.h"
#include "log/logger.h"

Method4180121::Method4180121()
{
    type = 21;
    id = 4180121;
}

Method4180121::~Method4180121()
{
}

int Method4180121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff4180121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
    return 1;
}

