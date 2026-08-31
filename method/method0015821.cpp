#include "method0015821.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0015821.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0015821::Method0015821()
{
    type = 21;
    id = 15821;
}

Method0015821::~Method0015821()
{

}

int Method0015821::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0015821(obj, obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
