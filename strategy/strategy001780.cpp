#include "strategy001780.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001780.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001780::Strategy001780()
{
    id = 1780;
}

Strategy001780::~Strategy001780()
{

}

bool Strategy001780::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001780(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
