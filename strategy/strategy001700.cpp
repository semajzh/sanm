#include "strategy001700.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001700.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001700::Strategy001700()
{
    id = 1700;
}

Strategy001700::~Strategy001700()
{

}

bool Strategy001700::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001700(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
