#include "method0110321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0110321.h"
#include "log/logger.h"

Method0110321::Method0110321()
{
    type = 21;
    id = 110321;
}

Method0110321::~Method0110321()
{

}

int Method0110321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x11, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0110321(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
