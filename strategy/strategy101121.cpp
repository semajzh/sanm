#include "strategy101121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101121.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101121::Strategy101121()
{
    id = 101121;
}

Strategy101121::~Strategy101121()
{

}

bool Strategy101121::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101121(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
