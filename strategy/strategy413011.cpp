#include "strategy413011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff413011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy413011::Strategy413011()
{
    id = 413011;
}

Strategy413011::~Strategy413011()
{

}

bool Strategy413011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff413011(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}
