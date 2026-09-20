#include "method1170121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1170121.h"
#include "log/logger.h"

Method1170121::Method1170121()
{
    type = 21;
    id = 1170121;
}

Method1170121::~Method1170121()
{

}

int Method1170121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0211, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1170121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[2][obj], buff);
    }

    return 1;
}
