#include "strategy114011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff114011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy114011::Strategy114011()
{
    id = 114011;
}

Strategy114011::~Strategy114011()
{

}

bool Strategy114011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff114011(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}
