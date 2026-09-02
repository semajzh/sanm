#include "method0016320.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016320.h"
#include "log/logger.h"

Method0016320::Method0016320()
{
    type = 20;
    id = 16320;
}

Method0016320::~Method0016320()
{

}

int Method0016320::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016320(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}
