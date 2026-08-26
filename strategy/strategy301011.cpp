#include "strategy301011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301011::Strategy301011()
{
    id = 301011;
}

Strategy301011::~Strategy301011()
{

}

bool Strategy301011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

