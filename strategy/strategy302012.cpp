#include "strategy302012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff302012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy302012::Strategy302012()
{
    id = 302012;
}

Strategy302012::~Strategy302012()
{

}

bool Strategy302012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff302012(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

