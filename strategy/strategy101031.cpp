#include "strategy101031.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101031.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101031::Strategy101031()
{
    id = 101031;
}

Strategy101031::~Strategy101031()
{

}

bool Strategy101031::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101031(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

