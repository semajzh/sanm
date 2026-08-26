#include "strategy101021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101021::Strategy101021()
{
    id = 101021;
}

Strategy101021::~Strategy101021()
{

}

bool Strategy101021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

