#include "strategy001850.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001850.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001850::Strategy001850()
{
    id = 1850;
}

Strategy001850::~Strategy001850()
{

}

bool Strategy001850::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001850(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
