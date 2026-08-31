#include "method0015621.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0015621.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0015621::Method0015621()
{
    type = 21;
    id = 15621;
}

Method0015621::~Method0015621()
{

}

int Method0015621::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0015621(obj, obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
