#include "method0020621.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0020621.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0020621::Method0020621()
{
    type = 21;
    id = 20621;
}

Method0020621::~Method0020621()
{

}

int Method0020621::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00206211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[5][obj], buff);
    }
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00206212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[4][obj], buff);
    }

    return 1;
}

