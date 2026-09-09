#include "strategy301052.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301052.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301052::Strategy301052()
{
    id = 301052;
}

Strategy301052::~Strategy301052()
{

}

bool Strategy301052::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301052(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
