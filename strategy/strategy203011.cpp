#include "strategy203011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff203011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy203011::Strategy203011()
{
    id = 203011;
}

Strategy203011::~Strategy203011()
{

}

bool Strategy203011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff203011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
