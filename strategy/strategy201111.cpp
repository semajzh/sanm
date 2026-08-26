#include "strategy201111.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201111.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201111::Strategy201111()
{
    id = 201111;
}

Strategy201111::~Strategy201111()
{

}

bool Strategy201111::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201111(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
