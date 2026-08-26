#include "strategy301031.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301031.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301031::Strategy301031()
{
    id = 301031;
}

Strategy301031::~Strategy301031()
{

}

bool Strategy301031::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301031(item1->g[0], obj, 301031));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

