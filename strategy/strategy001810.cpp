#include "strategy001810.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001810.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001810::Strategy001810()
{
    id = 1810;
}

Strategy001810::~Strategy001810()
{

}

bool Strategy001810::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001810(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
