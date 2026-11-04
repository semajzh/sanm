#include "strategy318021.h"
#include "ground.h"
#include "buff/buff318021.h"
#include "log/logger.h"

Strategy318021::Strategy318021()
{
    id = 318021;
}

Strategy318021::~Strategy318021()
{

}

bool Strategy318021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff318021(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
