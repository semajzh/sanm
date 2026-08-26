#include "strategy001110.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001110.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001110::Strategy001110()
{
    id = 1110;
}

Strategy001110::~Strategy001110()
{

}

bool Strategy001110::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001110(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

