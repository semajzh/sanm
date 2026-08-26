#include "method0150120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0150120.h"
#include "log/logger.h"

Method0150120::Method0150120()
{
    type = 20;
    id = 150120;
}

Method0150120::~Method0150120()
{

}

int Method0150120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0150120(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}

