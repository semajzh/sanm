#include "method0010320.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0010320.h"
#include "log/logger.h"

Method0010320::Method0010320()
{
    type = 20;
    id = 10320;
}

Method0010320::~Method0010320()
{

}

int Method0010320::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0010320(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
