#include "method2050121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2050121.h"
#include "log/logger.h"

Method2050121::Method2050121()
{
    type = 21;
    id = 2050121;
}

Method2050121::~Method2050121()
{

}

int Method2050121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2050121(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}

