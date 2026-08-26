#include "strategy301082.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301082.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301082::Strategy301082()
{
    id = 301082;
}

Strategy301082::~Strategy301082()
{

}

bool Strategy301082::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301082(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[9][obj], buff);

    return true;
}

