#include "method0014720.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014720.h"
#include "log/logger.h"

Method0014720::Method0014720()
{
    type = 20;
    id = 14720;
}

Method0014720::~Method0014720()
{

}

int Method0014720::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0014720(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return 1;
}

