#include "strategy201081.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201081.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201081::Strategy201081()
{
    id = 201081;
}

Strategy201081::~Strategy201081()
{

}

bool Strategy201081::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201081(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
