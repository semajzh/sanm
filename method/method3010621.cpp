#include "method3010621.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3010621.h"
#include "log/logger.h"
#include <QSharedPointer>

Method3010621::Method3010621()
{
    type = 21;
    id = 3010621;
}

Method3010621::~Method3010621()
{

}

int Method3010621::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010621(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

