#include "strategy001080.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001080.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001080::Strategy001080()
{
    id = 1080;
}

Strategy001080::~Strategy001080()
{

}

bool Strategy001080::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001080(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

