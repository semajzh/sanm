#include "method3050122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3050122.h"
#include "log/logger.h"


Method3050122::Method3050122()
{
    type = 2222;
    id = 3050122;
    luck = 55;
}

Method3050122::~Method3050122()
{

}

int Method3050122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0033, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30501221(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff30501222(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[2][obj], buff2);
    }

    return 1;
}
