#include "method1020120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1020120.h"
#include "log/logger.h"

Method1020120::Method1020120()
{
    type = 20;
    id = 1020120;
}

Method1020120::~Method1020120()
{

}

int Method1020120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1020120(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[5][item1->g[0]], buff);

    return 1;
}

