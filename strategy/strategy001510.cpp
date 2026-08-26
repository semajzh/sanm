#include "strategy001510.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001510.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001510::Strategy001510()
{
    id = 1510;
}

Strategy001510::~Strategy001510()
{

}

bool Strategy001510::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001510(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
