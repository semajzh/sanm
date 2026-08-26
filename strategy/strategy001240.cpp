#include "strategy001240.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001240.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001240::Strategy001240()
{
    id = 1240;
}

Strategy001240::~Strategy001240()
{

}

bool Strategy001240::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001240(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
