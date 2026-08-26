#include "strategy001610.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001610.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001610::Strategy001610()
{
    id = 1610;
}

Strategy001610::~Strategy001610()
{

}

bool Strategy001610::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001610(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
