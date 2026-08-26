#include "method9999999.h"
#include "ground.h"
#include "item.h"
#include "buff/buff9999999.h"
#include "log/logger.h"


Method9999999::Method9999999()
{
    type = 2222;
    id = 9999999;
    luck = 50;
}

Method9999999::~Method9999999()
{

}

int Method9999999::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 50;
    return luck;
}

int Method9999999::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff9999999(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);

    return 1;
}
