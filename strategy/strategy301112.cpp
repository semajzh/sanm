#include "strategy301112.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301112.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301112::Strategy301112()
{
    id = 301112;
}

Strategy301112::~Strategy301112()
{

}

bool Strategy301112::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301112(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
