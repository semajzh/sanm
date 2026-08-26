#include "strategy101042.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101042.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101042::Strategy101042()
{
    id = 101042;
}

Strategy101042::~Strategy101042()
{

}

bool Strategy101042::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101042(item1->g[0], obj, id, 3));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}

