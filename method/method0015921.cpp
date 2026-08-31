#include "method0015921.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0015921.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0015921::Method0015921()
{
    type = 21;
    id = 15921;
}

Method0015921::~Method0015921()
{

}

int Method0015921::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0015921(obj, obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
