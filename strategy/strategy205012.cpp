#include "strategy205012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff205012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy205012::Strategy205012()
{
    id = 205012;
}

Strategy205012::~Strategy205012()
{

}

bool Strategy205012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff205012(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[7][obj], buff);
    }

    return true;
}

