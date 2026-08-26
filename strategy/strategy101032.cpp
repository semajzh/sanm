#include "strategy101032.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101032.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101032::Strategy101032()
{
    id = 101032;
}

Strategy101032::~Strategy101032()
{

}

bool Strategy101032::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101032(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

