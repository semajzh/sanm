#include "strategy401091.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401091.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401091::Strategy401091()
{
    id = 401091;
}

Strategy401091::~Strategy401091()
{

}

bool Strategy401091::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401091(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
