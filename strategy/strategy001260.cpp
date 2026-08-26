#include "strategy001260.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001260.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001260::Strategy001260()
{
    id = 1260;
}

Strategy001260::~Strategy001260()
{

}

bool Strategy001260::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 1)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001260(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
