#include "strategy301081.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301081.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301081::Strategy301081()
{
    id = 301081;
}

Strategy301081::~Strategy301081()
{

}

bool Strategy301081::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301081(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

