#include "strategy001270.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001270.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001270::Strategy001270()
{
    id = 1270;
}

Strategy001270::~Strategy001270()
{

}

bool Strategy001270::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001270(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
