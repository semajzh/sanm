#include "strategy301111.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301111.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301111::Strategy301111()
{
    id = 301111;
}

Strategy301111::~Strategy301111()
{

}

bool Strategy301111::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301111(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

