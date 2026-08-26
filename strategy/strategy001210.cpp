#include "strategy001210.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001210.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001210::Strategy001210()
{
    id = 1210;
}

Strategy001210::~Strategy001210()
{

}

bool Strategy001210::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001210(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

