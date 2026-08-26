#include "method4070121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4070121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method4070121::Method4070121()
{
    type = 21;
    id = 4070121;
}

Method4070121::~Method4070121()
{

}

int Method4070121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4070121(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

