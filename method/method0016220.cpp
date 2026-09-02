#include "method0016220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016220.h"
#include "log/logger.h"

Method0016220::Method0016220()
{
    type = 20;
    id = 16220;
}

Method0016220::~Method0016220()
{

}

int Method0016220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
