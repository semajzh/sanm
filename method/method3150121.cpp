#include "method3150121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3150121.h"
#include "log/logger.h"

Method3150121::Method3150121()
{
    type = 21;
    id = 3150121;
}

Method3150121::~Method3150121()
{

}

int Method3150121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3011, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31501211(item1->g[0], item1->g[0], id, obj));
        Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff31501212(item1->g[0], obj, id, item1->g[0]));
        Ground::addBuff(ground, ground->buff[3][obj], buff2);
    }

    return 1;
}
