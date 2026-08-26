#include "strategy001130.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001130.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001130::Strategy001130()
{
    id = 1130;
}

Strategy001130::~Strategy001130()
{

}

bool Strategy001130::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001130(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

