#include "strategy201032.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201032.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201032::Strategy201032()
{
    id = 201032;
}

Strategy201032::~Strategy201032()
{

}

bool Strategy201032::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 0)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201032(obj, obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
