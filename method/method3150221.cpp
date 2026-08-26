#include "method3150221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3150221.h"
#include "log/logger.h"

Method3150221::Method3150221()
{
    type = 21;
    id = 3150221;
}

Method3150221::~Method3150221()
{

}

int Method3150221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3150221(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}
