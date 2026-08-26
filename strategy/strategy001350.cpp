#include "strategy001350.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001350.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001350::Strategy001350()
{
    id = 1350;
}

Strategy001350::~Strategy001350()
{

}

bool Strategy001350::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 1)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001350(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
