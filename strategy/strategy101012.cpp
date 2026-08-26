#include "strategy101012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101012::Strategy101012()
{
    id = 101012;
}

Strategy101012::~Strategy101012()
{

}

bool Strategy101012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0013);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101012(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

