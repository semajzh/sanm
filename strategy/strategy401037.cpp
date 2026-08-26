#include "strategy401037.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401037.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401037::Strategy401037()
{
    id = 401037;
}

Strategy401037::~Strategy401037()
{

}

bool Strategy401037::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401037(item1->g[0], obj, 401037));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
