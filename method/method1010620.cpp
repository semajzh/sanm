#include "method1010620.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010620.h"
#include "log/logger.h"

Method1010620::Method1010620()
{
    type = 20;
    id = 1010620;
}

Method1010620::~Method1010620()
{

}

int Method1010620::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1010620(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
