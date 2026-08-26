#include "strategy001770.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001770.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001770::Strategy001770()
{
    id = 1770;
}

Strategy001770::~Strategy001770()
{

}

bool Strategy001770::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001770(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
