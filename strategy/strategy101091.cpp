#include "strategy101091.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101091.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101091::Strategy101091()
{
    id = 101091;
}

Strategy101091::~Strategy101091()
{

}

bool Strategy101091::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101091(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
