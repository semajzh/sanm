#include "method0020820.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0020820.h"
#include "log/logger.h"

Method0020820::Method0020820()
{
    type = 20;
    id = 20820;
}

Method0020820::~Method0020820()
{

}

int Method0020820::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0020820(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

