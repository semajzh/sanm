#include "strategy001390.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001390.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001390::Strategy001390()
{
    id = 1390;
}

Strategy001390::~Strategy001390()
{

}

bool Strategy001390::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001390(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
