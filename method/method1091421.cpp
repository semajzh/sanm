#include "method1091421.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1091421.h"
#include "log/logger.h"

Method1091421::Method1091421()
{
    type = 21;
    id = 1091421;
}

Method1091421::~Method1091421()
{

}

int Method1091421::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1091421(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
