#include "method0040220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0040220.h"
#include "log/logger.h"

Method0040220::Method0040220()
{
    type = 20;
    id = 40220;
}

Method0040220::~Method0040220()
{

}

int Method0040220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00402201(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff00402202(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff1);

    return 1;
}

