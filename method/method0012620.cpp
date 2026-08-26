#include "method0012620.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0012620.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0012620::Method0012620()
{
    type = 20;
    id = 12620;
}

Method0012620::~Method0012620()
{

}

int Method0012620::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0012620(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

