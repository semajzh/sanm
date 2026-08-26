#include "strategy001630.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001630.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001630::Strategy001630()
{
    id = 1630;
}

Strategy001630::~Strategy001630()
{

}

bool Strategy001630::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001630(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
