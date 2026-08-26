#include "method3011221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3011221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method3011221::Method3011221()
{
    type = 21;
    id = 3011221;
}

Method3011221::~Method3011221()
{

}

int Method3011221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3011221(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

