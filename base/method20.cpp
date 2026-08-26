#include "method9999999.h"
#include "ground.h"
#include "item.h"
#include "buff/buff9999999.h"
#include "log/logger.h"

Method9999999::Method9999999()
{
    type = 20;
    id = 9999999;
}

Method9999999::~Method9999920()
{

}

int Method9999999::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff9999999(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}

