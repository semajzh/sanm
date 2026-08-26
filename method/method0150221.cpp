#include "method0150221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0150221.h"
#include "log/logger.h"

Method0150221::Method0150221()
{
    type = 21;
    id = 150221;
}

Method0150221::~Method0150221()
{

}

int Method0150221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0150221(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}
