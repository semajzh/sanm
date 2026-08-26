#include "strategy403012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff403012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy403012::Strategy403012()
{
    id = 403012;
}

Strategy403012::~Strategy403012()
{

}

bool Strategy403012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff403012(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

