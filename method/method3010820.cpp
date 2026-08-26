#include "method3010820.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3010820.h"
#include "log/logger.h"

Method3010820::Method3010820()
{
    type = 20;
    id = 3010820;
}

Method3010820::~Method3010820()
{

}

int Method3010820::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010820(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

