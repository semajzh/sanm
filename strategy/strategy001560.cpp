#include "strategy001560.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001560.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001560::Strategy001560()
{
    id = 1560;
}

Strategy001560::~Strategy001560()
{

}

bool Strategy001560::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001560(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
