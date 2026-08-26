#include "method5000220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff5000220.h"
#include "log/logger.h"

Method5000220::Method5000220()
{
    type = 20;
    id = 5000220;
}

Method5000220::~Method5000220()
{

}

int Method5000220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff5000220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
