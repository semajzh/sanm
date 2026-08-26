#include "strategy001820.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001820.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001820::Strategy001820()
{
    id = 1820;
}

Strategy001820::~Strategy001820()
{

}

bool Strategy001820::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001820(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
