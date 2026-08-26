#include "strategy101111.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101111.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101111::Strategy101111()
{
    id = 101111;
}

Strategy101111::~Strategy101111()
{

}

bool Strategy101111::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101111(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
