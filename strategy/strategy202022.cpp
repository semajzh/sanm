#include "strategy202022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff202022.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy202022::Strategy202022()
{
    id = 202022;
}

Strategy202022::~Strategy202022()
{

}

bool Strategy202022::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff202022(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
