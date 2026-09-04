#include "strategy201012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201012::Strategy201012()
{
    id = 201012;
}

Strategy201012::~Strategy201012()
{

}

bool Strategy201012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0013, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201012(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
