#include "method0020520.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0020520.h"
#include "log/logger.h"

Method0020520::Method0020520()
{
    type = 20;
    id = 20520;
}

Method0020520::~Method0020520()
{

}

int Method0020520::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0020520(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

