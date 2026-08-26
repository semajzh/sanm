#include "method0014220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014220.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0014220::Method0014220()
{
    type = 20;
    id = 14220;
}

Method0014220::~Method0014220()
{

}

int Method0014220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0014220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

