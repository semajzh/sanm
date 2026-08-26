#include "strategy001100.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001100.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001100::Strategy001100()
{
    id = 1100;
}

Strategy001100::~Strategy001100()
{

}

bool Strategy001100::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001100(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

