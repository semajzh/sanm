#include "strategy301012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301012::Strategy301012()
{
    id = 301012;
}

Strategy301012::~Strategy301012()
{

}

bool Strategy301012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301012(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return true;
}

