#include "method0050220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0050220.h"
#include "log/logger.h"

Method0050220::Method0050220()
{
    type = 20;
    id = 50220;
}

Method0050220::~Method0050220()
{

}

int Method0050220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0050220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
