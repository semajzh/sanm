#include "method1140121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1140121.h"
#include "log/logger.h"

Method1140121::Method1140121()
{
    type = 21;
    id = 1140121;
}

Method1140121::~Method1140121()
{

}

int Method1140121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1140121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[2][obj], buff);
    }

    return 1;
}
