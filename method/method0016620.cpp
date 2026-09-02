#include "method0016620.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016620.h"
#include "log/logger.h"

Method0016620::Method0016620()
{
    type = 20;
    id = 16620;
}

Method0016620::~Method0016620()
{

}

int Method0016620::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016620(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
