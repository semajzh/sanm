#include "strategy303018.h"
#include "ground.h"
#include "item.h"
#include "buff/buff303018.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy303018::Strategy303018()
{
    id = 303018;
}

Strategy303018::~Strategy303018()
{

}

bool Strategy303018::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff303018(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
