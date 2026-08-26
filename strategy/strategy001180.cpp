#include "strategy001180.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001180.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001180::Strategy001180()
{
    id = 1180;
}

Strategy001180::~Strategy001180()
{

}

bool Strategy001180::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001180(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}

