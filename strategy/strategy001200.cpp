#include "strategy001200.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001200.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001200::Strategy001200()
{
    id = 1200;
}

Strategy001200::~Strategy001200()
{

}

bool Strategy001200::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001200(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}

