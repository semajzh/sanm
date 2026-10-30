#include "method3180221.h"
#include "ground.h"
#include "buff/buff3180221.h"
#include "log/logger.h"

Method3180221::Method3180221()
{
    type = 21;
    id = 3180221;
}

Method3180221::~Method3180221()
{
}

int Method3180221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff(new Buff3180221(obj, obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
