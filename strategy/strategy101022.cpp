#include "strategy101022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101022.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101022::Strategy101022()
{
    id = 101022;
}

Strategy101022::~Strategy101022()
{

}

bool Strategy101022::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101022(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
