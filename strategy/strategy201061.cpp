#include "strategy201061.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201061.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201061::Strategy201061()
{
    id = 201061;
}

Strategy201061::~Strategy201061()
{

}

bool Strategy201061::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201061(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
