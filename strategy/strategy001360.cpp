#include "strategy001360.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001360.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001360::Strategy001360()
{
    id = 1360;
}

Strategy001360::~Strategy001360()
{

}

bool Strategy001360::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001360(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
