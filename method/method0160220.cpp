#include "method0160220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0160220.h"
#include "log/logger.h"

Method0160220::Method0160220()
{
    type = 20;
    id = 160220;
}

Method0160220::~Method0160220()
{

}

int Method0160220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0160220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}
