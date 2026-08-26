#include "strategy101041.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101041.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101041::Strategy101041()
{
    id = 101041;
}

Strategy101041::~Strategy101041()
{

}

bool Strategy101041::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101041(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

