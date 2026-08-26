#include "method4010121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4010121.h"
#include "log/logger.h"

Method4010121::Method4010121()
{
    type = 21;
    id = 4010121;
}

Method4010121::~Method4010121()
{

}

int Method4010121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010121(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
