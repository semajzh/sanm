#include "method1011320.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1011320.h"
#include "log/logger.h"

Method1011320::Method1011320()
{
    type = 20;
    id = 1011320;
}

Method1011320::~Method1011320()
{

}

int Method1011320::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1011320(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}

