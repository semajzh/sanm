#include "method3120221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3120221.h"
#include "log/logger.h"

Method3120221::Method3120221()
{
    type = 21;
    id = 3120221;
}

Method3120221::~Method3120221()
{

}

int Method3120221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3120221(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
