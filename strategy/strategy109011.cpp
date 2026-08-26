#include "strategy109011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff109011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy109011::Strategy109011()
{
    id = 109011;
}

Strategy109011::~Strategy109011()
{

}

bool Strategy109011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff109011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return true;
}
