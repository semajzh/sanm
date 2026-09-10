#include "strategy001840.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001840.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001840::Strategy001840()
{
    id = 1840;
}

Strategy001840::~Strategy001840()
{

}

bool Strategy001840::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 0)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001840(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
