#include "method0120321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0120321.h"
#include "log/logger.h"

Method0120321::Method0120321()
{
    type = 21;
    id = 120321;
}

Method0120321::~Method0120321()
{

}

int Method0120321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0111);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0120321(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
