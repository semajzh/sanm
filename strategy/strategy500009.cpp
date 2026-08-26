#include "strategy500009.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500009.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500009::Strategy500009()
{
    id = 500009;
}

Strategy500009::~Strategy500009()
{

}

bool Strategy500009::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500009(item1->g[0], obj, id, objs.size()));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
