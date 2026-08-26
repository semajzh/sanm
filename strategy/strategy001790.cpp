#include "strategy001790.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001790.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001790::Strategy001790()
{
    id = 1790;
}

Strategy001790::~Strategy001790()
{

}

bool Strategy001790::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001790(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
