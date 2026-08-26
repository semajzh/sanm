#include "method0012921.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0012921.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0012921::Method0012921()
{
    type = 21;
    id = 12921;
}

Method0012921::~Method0012921()
{

}

int Method0012921::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0012921(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

