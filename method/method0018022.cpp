#include "method0018022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0018022.h"
#include "log/logger.h"

Method0018022::Method0018022()
{
    type = 2222;
    id = 18022;
    luck = 60;
}

Method0018022::~Method0018022()
{

}

int Method0018022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0018022(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
