#include "strategy001380.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001380.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001380::Strategy001380()
{
    id = 1380;
}

Strategy001380::~Strategy001380()
{

}

bool Strategy001380::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001380(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
