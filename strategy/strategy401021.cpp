#include "strategy401021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401021::Strategy401021()
{
    id = 401021;
}

Strategy401021::~Strategy401021()
{

}

bool Strategy401021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401021(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
