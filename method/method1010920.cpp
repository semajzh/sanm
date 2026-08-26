#include "method1010920.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010920.h"
#include "log/logger.h"

Method1010920::Method1010920()
{
    type = 20;
    id = 1010920;
}

Method1010920::~Method1010920()
{

}

int Method1010920::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1010920(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[2][item1->g[0]], buff);

    return 1;
}

