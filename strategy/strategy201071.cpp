#include "strategy201071.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201071.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201071::Strategy201071()
{
    id = 201071;
}

Strategy201071::~Strategy201071()
{

}

bool Strategy201071::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201071(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
