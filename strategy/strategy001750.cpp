#include "strategy001750.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001750.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001750::Strategy001750()
{
    id = 1750;
}

Strategy001750::~Strategy001750()
{

}

bool Strategy001750::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001750(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
