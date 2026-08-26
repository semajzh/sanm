#include "strategy401052.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401052.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401052::Strategy401052()
{
    id = 401052;
}

Strategy401052::~Strategy401052()
{

}

bool Strategy401052::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401052(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return true;
}
