#include "method0010822.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0010822.h"
#include "log/logger.h"

Method0010822::Method0010822()
{
    type = 2222;
    id = 10822;
    luck = 45;
}

Method0010822::~Method0010822()
{

}

int Method0010822::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0010822(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
