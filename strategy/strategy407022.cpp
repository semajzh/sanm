#include "strategy407022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff407022.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy407022::Strategy407022()
{
    id = 407022;
}

Strategy407022::~Strategy407022()
{

}

bool Strategy407022::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff407022(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
