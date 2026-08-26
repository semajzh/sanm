#include "strategy001150.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001150.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001150::Strategy001150()
{
    id = 1150;
}

Strategy001150::~Strategy001150()
{

}

bool Strategy001150::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001150(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

