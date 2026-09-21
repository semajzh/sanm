#include "method0170121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0170121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0170121::Method0170121()
{
    type = 21;
    id = 170121;
}

Method0170121::~Method0170121()
{

}

int Method0170121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x6010, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0170121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
