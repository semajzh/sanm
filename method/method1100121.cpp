#include "method1100121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1100121.h"
#include "log/logger.h"

Method1100121::Method1100121()
{
    type = 21;
    id = 1100121;
}

Method1100121::~Method1100121()
{

}

int Method1100121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1100121(item1->g[0], obj, id, 4));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return 1;
}
