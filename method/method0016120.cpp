#include "method0016120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016120.h"
#include "log/logger.h"

Method0016120::Method0016120()
{
    type = 20;
    id = 16120;
}

Method0016120::~Method0016120()
{

}

int Method0016120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
