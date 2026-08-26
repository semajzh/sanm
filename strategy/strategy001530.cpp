#include "strategy001530.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001530.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001530::Strategy001530()
{
    id = 1530;
}

Strategy001530::~Strategy001530()
{

}

bool Strategy001530::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001530(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
