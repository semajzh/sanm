#include "strategy500008.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500008.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500008::Strategy500008()
{
    id = 500008;
}

Strategy500008::~Strategy500008()
{

}

bool Strategy500008::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500008(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
