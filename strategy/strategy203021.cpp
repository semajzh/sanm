#include "strategy203021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff203021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy203021::Strategy203021()
{
    id = 203021;
}

Strategy203021::~Strategy203021()
{

}

bool Strategy203021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff203021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
