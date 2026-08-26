#include "strategy001340.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001340.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001340::Strategy001340()
{
    id = 1340;
}

Strategy001340::~Strategy001340()
{

}

bool Strategy001340::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001340(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}
