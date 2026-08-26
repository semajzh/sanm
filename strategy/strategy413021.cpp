#include "strategy413021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff413021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy413021::Strategy413021()
{
    id = 413021;
}

Strategy413021::~Strategy413021()
{

}

bool Strategy413021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff413021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
