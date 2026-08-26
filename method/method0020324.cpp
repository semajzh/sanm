#include "method0020324.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0020324.h"
#include "log/logger.h"

Method0020324::Method0020324()
{
    type = 2224;
    id = 20324;
    luck = 60;
}

Method0020324::~Method0020324()
{

}

int Method0020324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = ground->target2223;
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0020324(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

