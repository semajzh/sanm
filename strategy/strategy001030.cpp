#include "strategy001030.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001030.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001030::Strategy001030()
{
    id = 1030;
}

Strategy001030::~Strategy001030()
{

}

bool Strategy001030::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001030(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}

