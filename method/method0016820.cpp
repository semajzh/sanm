#include "method0016820.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016820.h"
#include "log/logger.h"

Method0016820::Method0016820()
{
    type = 20;
    id = 16820;
}

Method0016820::~Method0016820()
{

}

int Method0016820::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016820(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
