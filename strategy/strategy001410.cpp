#include "strategy001410.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001410.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001410::Strategy001410()
{
    id = 1410;
}

Strategy001410::~Strategy001410()
{

}

bool Strategy001410::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001410(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
