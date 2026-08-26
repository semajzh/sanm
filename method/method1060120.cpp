#include "method1060120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1060120.h"
#include "log/logger.h"

Method1060120::Method1060120()
{
    type = 20;
    id = 1060120;
}

Method1060120::~Method1060120()
{

}

int Method1060120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1060120(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}
