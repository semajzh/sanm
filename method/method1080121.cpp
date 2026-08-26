#include "method1080121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1080121.h"
#include "log/logger.h"

Method1080121::Method1080121()
{
    type = 21;
    id = 1080121;
}

Method1080121::~Method1080121()
{

}

int Method1080121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1080121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[9][obj], buff);
    }

    return 1;
}
