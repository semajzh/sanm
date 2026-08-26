#include "method0100220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0100220.h"
#include "log/logger.h"

Method0100220::Method0100220()
{
    type = 20;
    id = 100220;
}

Method0100220::~Method0100220()
{

}

int Method0100220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0100220(item1->g[0], obj, id, 3));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return 1;
}
