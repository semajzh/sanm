#include "strategy401056.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401056.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401056::Strategy401056()
{
    id = 401056;
}

Strategy401056::~Strategy401056()
{

}

bool Strategy401056::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401056(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}
