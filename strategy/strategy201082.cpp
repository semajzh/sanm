#include "strategy201082.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201082.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201082::Strategy201082()
{
    id = 201082;
}

Strategy201082::~Strategy201082()
{

}

bool Strategy201082::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201082(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
