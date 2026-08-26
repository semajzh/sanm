#include "method1010320.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010320.h"
#include "log/logger.h"

Method1010320::Method1010320()
{
    type = 20;
    id = 1010320;
}

Method1010320::~Method1010320()
{

}

int Method1010320::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1010320(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
