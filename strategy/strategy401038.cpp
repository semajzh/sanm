#include "strategy401038.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401038.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401038::Strategy401038()
{
    id = 401038;
}

Strategy401038::~Strategy401038()
{

}

bool Strategy401038::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401038(item1->g[0], obj, 401038, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}
