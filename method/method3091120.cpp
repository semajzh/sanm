#include "method3091120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3091120.h"
#include "log/logger.h"

Method3091120::Method3091120()
{
    type = 20;
    id = 3091120;
}

Method3091120::~Method3091120()
{

}

int Method3091120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3091120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

