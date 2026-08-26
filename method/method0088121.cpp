#include "method0088121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0088121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0088121::Method0088121()
{
    type = 21;
    id = 88121;
}

Method0088121::~Method0088121()
{

}

int Method0088121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0088121(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

