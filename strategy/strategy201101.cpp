#include "strategy201101.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201101.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201101::Strategy201101()
{
    id = 201101;
}

Strategy201101::~Strategy201101()
{

}

bool Strategy201101::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201101(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
