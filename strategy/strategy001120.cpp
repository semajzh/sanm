#include "strategy001120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001120.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001120::Strategy001120()
{
    id = 1120;
}

Strategy001120::~Strategy001120()
{

}

bool Strategy001120::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001120(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}

