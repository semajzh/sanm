#include "strategy001520.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001520.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001520::Strategy001520()
{
    id = 1520;
}

Strategy001520::~Strategy001520()
{

}

bool Strategy001520::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001520(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
