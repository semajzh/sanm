#include "strategy001680.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001680.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001680::Strategy001680()
{
    id = 1680;
}

Strategy001680::~Strategy001680()
{

}

bool Strategy001680::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001680(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}
