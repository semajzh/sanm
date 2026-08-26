#include "strategy001140.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001140.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001140::Strategy001140()
{
    id = 1140;
}

Strategy001140::~Strategy001140()
{

}

bool Strategy001140::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001140(item1->g[0], obj, id, 3));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}

