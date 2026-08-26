#include "strategy001640.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001640.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001640::Strategy001640()
{
    id = 1640;
}

Strategy001640::~Strategy001640()
{

}

bool Strategy001640::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001640(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return true;
}
