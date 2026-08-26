#include "strategy001400.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001400.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001400::Strategy001400()
{
    id = 1400;
}

Strategy001400::~Strategy001400()
{

}

bool Strategy001400::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001400(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
