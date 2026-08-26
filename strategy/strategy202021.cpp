#include "strategy202021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff202021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy202021::Strategy202021()
{
    id = 202021;
}

Strategy202021::~Strategy202021()
{

}

bool Strategy202021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff202021(item1->g[0], obj, id, 4));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return true;
}
