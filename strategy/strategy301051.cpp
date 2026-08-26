#include "strategy301051.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301051.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301051::Strategy301051()
{
    id = 301051;
}

Strategy301051::~Strategy301051()
{

}

bool Strategy301051::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301051(item1->g[0], obj, 301051));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}

