#include "method0016020.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016020.h"
#include "log/logger.h"

Method0016020::Method0016020()
{
    type = 20;
    id = 16020;
}

Method0016020::~Method0016020()
{

}

int Method0016020::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016020(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return 1;
}
