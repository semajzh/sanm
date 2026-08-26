#include "strategy301131.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301131.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301131::Strategy301131()
{
    id = 301131;
}

Strategy301131::~Strategy301131()
{

}

bool Strategy301131::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301131(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

