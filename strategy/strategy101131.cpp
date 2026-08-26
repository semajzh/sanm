#include "strategy101131.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101131.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101131::Strategy101131()
{
    id = 101131;
}

Strategy101131::~Strategy101131()
{

}

bool Strategy101131::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101131(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
