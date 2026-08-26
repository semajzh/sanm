#include "strategy001440.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001440.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001440::Strategy001440()
{
    id = 1440;
}

Strategy001440::~Strategy001440()
{

}

bool Strategy001440::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001440(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
