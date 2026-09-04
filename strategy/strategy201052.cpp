#include "strategy201052.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201052.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201052::Strategy201052()
{
    id = 201052;
}

Strategy201052::~Strategy201052()
{

}

bool Strategy201052::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201052(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
