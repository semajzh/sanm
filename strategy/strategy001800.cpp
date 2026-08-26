#include "strategy001800.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001800.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001800::Strategy001800()
{
    id = 1800;
}

Strategy001800::~Strategy001800()
{

}

bool Strategy001800::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001800(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
