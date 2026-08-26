#include "method7000121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff7000121.h"
#include "log/logger.h"

Method7000121::Method7000121()
{
    type = 21;
    id = 7000121;
}

Method7000121::~Method7000121()
{

}

int Method7000121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff7000121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
