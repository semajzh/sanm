#include "strategy001170.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001170.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001170::Strategy001170()
{
    id = 1170;
}

Strategy001170::~Strategy001170()
{

}

bool Strategy001170::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 0)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001170(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

