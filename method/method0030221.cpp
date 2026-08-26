#include "method0030221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0030221.h"
#include "log/logger.h"

Method0030221::Method0030221()
{
    type = 21;
    id = 30221;
}

Method0030221::~Method0030221()
{

}

int Method0030221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0030221(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
