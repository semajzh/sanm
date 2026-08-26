#include "method7000221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff7000221.h"
#include "log/logger.h"

Method7000221::Method7000221()
{
    type = 21;
    id = 7000221;
}

Method7000221::~Method7000221()
{

}

int Method7000221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff7000221(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
