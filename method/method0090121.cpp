#include "method0090121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0090121.h"
#include "log/logger.h"

Method0090121::Method0090121()
{
    type = 21;
    id = 90121;
}

Method0090121::~Method0090121()
{

}

int Method0090121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00901211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00901212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[4][obj], buff);
    }

    return 1;
}
