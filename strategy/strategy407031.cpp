#include "strategy407031.h"
#include "ground.h"
#include "item.h"
#include "buff/buff407031.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy407031::Strategy407031()
{
    id = 407031;
}

Strategy407031::~Strategy407031()
{

}

bool Strategy407031::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff407031(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
