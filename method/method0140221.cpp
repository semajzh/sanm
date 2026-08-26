#include "method0140221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0140221.h"
#include "log/logger.h"

Method0140221::Method0140221()
{
    type = 21;
    id = 140221;
}

Method0140221::~Method0140221()
{

}

int Method0140221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0112);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0140221(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
