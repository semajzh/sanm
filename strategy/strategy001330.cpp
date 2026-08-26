#include "strategy001330.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001330.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001330::Strategy001330()
{
    id = 1330;
}

Strategy001330::~Strategy001330()
{

}

bool Strategy001330::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001330(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
