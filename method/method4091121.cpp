#include "method4091121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4091121.h"
#include "log/logger.h"

Method4091121::Method4091121()
{
    type = 21;
    id = 4091121;
}

Method4091121::~Method4091121()
{

}

int Method4091121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4091121(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
