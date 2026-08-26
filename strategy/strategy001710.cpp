#include "strategy001710.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001710.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001710::Strategy001710()
{
    id = 1710;
}

Strategy001710::~Strategy001710()
{

}

bool Strategy001710::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001710(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
