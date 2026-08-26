#include "method0014120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014120.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0014120::Method0014120()
{
    type = 20;
    id = 14120;
}

Method0014120::~Method0014120()
{

}

int Method0014120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0014120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

