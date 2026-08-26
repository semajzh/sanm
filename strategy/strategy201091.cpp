#include "strategy201091.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201091.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201091::Strategy201091()
{
    id = 201091;
}

Strategy201091::~Strategy201091()
{

}

bool Strategy201091::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201091(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return true;
}
