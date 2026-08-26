#include "strategy101101.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101101.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101101::Strategy101101()
{
    id = 101101;
}

Strategy101101::~Strategy101101()
{

}

bool Strategy101101::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101101(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
