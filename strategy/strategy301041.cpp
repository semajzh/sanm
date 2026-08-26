#include "strategy301041.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301041.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301041::Strategy301041()
{
    id = 301041;
}

Strategy301041::~Strategy301041()
{

}

bool Strategy301041::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301041(item1->g[0], obj, 301041));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return true;
}

