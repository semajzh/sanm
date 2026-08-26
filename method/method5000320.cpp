#include "method5000320.h"
#include "ground.h"
#include "item.h"
#include "buff/buff5000320.h"
#include "log/logger.h"

Method5000320::Method5000320()
{
    type = 20;
    id = 5000320;
}

Method5000320::~Method5000320()
{

}

int Method5000320::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff5000320(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
