#include "method0060221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0060221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0060221::Method0060221()
{
    type = 21;
    id = 60221;
}

Method0060221::~Method0060221()
{

}

int Method0060221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0060221(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

