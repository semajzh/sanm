#include "method2030221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2030221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2030221::Method2030221()
{
    type = 21;
    id = 2030221;
}

Method2030221::~Method2030221()
{

}

int Method2030221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2030221(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

