#include "strategy001230.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001230.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001230::Strategy001230()
{
    id = 1230;
}

Strategy001230::~Strategy001230()
{

}

bool Strategy001230::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001230(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
