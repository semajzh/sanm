#include "strategy001070.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001070.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001070::Strategy001070()
{
    id = 1070;
}

Strategy001070::~Strategy001070()
{

}

bool Strategy001070::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001070(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

