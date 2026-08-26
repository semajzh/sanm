#include "strategy114021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff114021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy114021::Strategy114021()
{
    id = 114021;
}

Strategy114021::~Strategy114021()
{

}

bool Strategy114021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff114021(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}
