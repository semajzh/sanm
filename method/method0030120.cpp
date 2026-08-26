#include "method0030120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0030120.h"
#include "log/logger.h"

Method0030120::Method0030120()
{
    type = 20;
    id = 30120;
}

Method0030120::~Method0030120()
{

}

int Method0030120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0030120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
