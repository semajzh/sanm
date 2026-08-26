#include "strategy001760.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001760.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001760::Strategy001760()
{
    id = 1760;
}

Strategy001760::~Strategy001760()
{

}

bool Strategy001760::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001760(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
