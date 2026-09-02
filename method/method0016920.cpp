#include "method0016920.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016920.h"
#include "log/logger.h"

Method0016920::Method0016920()
{
    type = 20;
    id = 16920;
}

Method0016920::~Method0016920()
{

}

int Method0016920::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016920(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return 1;
}
