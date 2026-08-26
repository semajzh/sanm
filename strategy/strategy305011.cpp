#include "strategy305011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff305011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy305011::Strategy305011()
{
    id = 305011;
}

Strategy305011::~Strategy305011()
{

}

bool Strategy305011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff305011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
