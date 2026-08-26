#include "method1011021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1011021.h"
#include "log/logger.h"

Method1011021::Method1011021()
{
    type = 21;
    id = 1011021;
}

Method1011021::~Method1011021()
{

}

int Method1011021::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1011021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

