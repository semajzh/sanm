#include "strategy303016.h"
#include "ground.h"
#include "item.h"
#include "buff/buff303016.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy303016::Strategy303016()
{
    id = 303016;
}

Strategy303016::~Strategy303016()
{

}

bool Strategy303016::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff303016(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
