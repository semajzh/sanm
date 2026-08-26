#include "strategy001160.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001160.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001160::Strategy001160()
{
    id = 1160;
}

Strategy001160::~Strategy001160()
{

}

bool Strategy001160::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001160(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

