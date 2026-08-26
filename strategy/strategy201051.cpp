#include "strategy201051.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201051.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201051::Strategy201051()
{
    id = 201051;
}

Strategy201051::~Strategy201051()
{

}

bool Strategy201051::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201051(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
