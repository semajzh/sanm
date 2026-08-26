#include "method0013724.h"
#include "ground.h"
#include "item.h"
#include "buff/buff102.h"
#include "buff/buff0013724.h"
#include "log/logger.h"

Method0013724::Method0013724()
{
    type = 2224;
    id = 13724;
    luck = 50;
}

Method0013724::~Method0013724()
{

}

int Method0013724::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);

        QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff0013724(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[0][obj], buff1);
    }

    return 1;
}

