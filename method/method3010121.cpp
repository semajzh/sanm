#include "method3010121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3010121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method3010121::Method3010121()
{
    type = 21;
    id = 3010121;
}

Method3010121::~Method3010121()
{

}

int Method3010121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int type = 0;
    for (int m = 1; m < 3; ++m)
    {
        if (item1->methods[m] % 100 == 22)
        {
            ++type;
        }
    }

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010121(item1->g[0], obj, id, type));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return 1;
}

