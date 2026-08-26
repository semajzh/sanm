#include "method0110120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0110120.h"
#include "log/logger.h"

Method0110120::Method0110120()
{
    type = 20;
    id = 110120;
}

Method0110120::~Method0110120()
{

}

int Method0110120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0110120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}
