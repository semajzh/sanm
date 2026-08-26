#include "method2040120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2040120.h"
#include "log/logger.h"

Method2040120::Method2040120()
{
    type = 20;
    id = 2040120;
}

Method2040120::~Method2040120()
{

}

int Method2040120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2040120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

