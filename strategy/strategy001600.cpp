#include "strategy001600.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001600.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001600::Strategy001600()
{
    id = 1600;
}

Strategy001600::~Strategy001600()
{

}

bool Strategy001600::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001600(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
