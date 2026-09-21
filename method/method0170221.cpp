#include "method0170221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0170221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0170221::Method0170221()
{
    type = 21;
    id = 170221;
}

Method0170221::~Method0170221()
{

}

int Method0170221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0170221(obj, obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
