#include "method4010820.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4010820.h"
#include "log/logger.h"

Method4010820::Method4010820()
{
    type = 20;
    id = 4010820;
}

Method4010820::~Method4010820()
{

}

int Method4010820::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010820(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
