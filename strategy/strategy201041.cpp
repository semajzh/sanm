#include "strategy201041.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201041.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201041::Strategy201041()
{
    id = 201041;
}

Strategy201041::~Strategy201041()
{

}

bool Strategy201041::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201041(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
