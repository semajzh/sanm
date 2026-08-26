#include "method3030120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3030120.h"
#include "log/logger.h"

Method3030120::Method3030120()
{
    type = 20;
    id = 3030120;
}

Method3030120::~Method3030120()
{

}

int Method3030120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3030120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

