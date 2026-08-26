#include "strategy103011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff103011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy103011::Strategy103011()
{
    id = 103011;
}

Strategy103011::~Strategy103011()
{

}

bool Strategy103011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff103011(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}

