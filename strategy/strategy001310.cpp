#include "strategy001310.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001310.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001310::Strategy001310()
{
    id = 1310;
}

Strategy001310::~Strategy001310()
{

}

bool Strategy001310::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001310(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
