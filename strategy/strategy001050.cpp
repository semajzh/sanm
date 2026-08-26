#include "strategy001050.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001050.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001050::Strategy001050()
{
    id = 1050;
}

Strategy001050::~Strategy001050()
{

}

bool Strategy001050::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001050(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

