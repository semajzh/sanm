#include "method3150121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3150121.h"
#include "log/logger.h"

Method3150121::Method3150121()
{
    type = 21;
    id = 3150121;
}

Method3150121::~Method3150121()
{

}

int Method3150121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3150121(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}
