#include "strategy301026.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301026.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301026::Strategy301026()
{
    id = 301026;
}

Strategy301026::~Strategy301026()
{

}

bool Strategy301026::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301026(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

