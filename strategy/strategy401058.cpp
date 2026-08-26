#include "strategy401058.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401058.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401058::Strategy401058()
{
    id = 401058;
}

Strategy401058::~Strategy401058()
{

}

bool Strategy401058::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401058(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
