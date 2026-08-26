#include "strategy001720.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001720.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001720::Strategy001720()
{
    id = 1720;
}

Strategy001720::~Strategy001720()
{

}

bool Strategy001720::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001720(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}
