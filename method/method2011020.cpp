#include "method2011020.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2011020.h"
#include "log/logger.h"

Method2011020::Method2011020()
{
    type = 20;
    id = 2011020;
}

Method2011020::~Method2011020()
{

}

int Method2011020::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2011020(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

