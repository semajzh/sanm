#include "method2011120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2011120.h"
#include "log/logger.h"

Method2011120::Method2011120()
{
    type = 20;
    id = 2011120;
}

Method2011120::~Method2011120()
{

}

int Method2011120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2011120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}

