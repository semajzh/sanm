#include "strategy001010.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001010.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001010::Strategy001010()
{
    id = 1010;
}

Strategy001010::~Strategy001010()
{

}

bool Strategy001010::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001010(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

