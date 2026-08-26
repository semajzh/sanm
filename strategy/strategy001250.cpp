#include "strategy001250.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001250.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001250::Strategy001250()
{
    id = 1250;
}

Strategy001250::~Strategy001250()
{

}

bool Strategy001250::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001250(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
