#include "strategy001670.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001670.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001670::Strategy001670()
{
    id = 1670;
}

Strategy001670::~Strategy001670()
{

}

bool Strategy001670::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001670(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
