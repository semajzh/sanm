#include "strategy001060.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001060.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001060::Strategy001060()
{
    id = 1060;
}

Strategy001060::~Strategy001060()
{

}

bool Strategy001060::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001060(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

