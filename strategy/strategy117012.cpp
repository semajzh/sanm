#include "strategy117012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff117012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy117012::Strategy117012()
{
    id = 117012;
}

Strategy117012::~Strategy117012()
{

}

bool Strategy117012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff117012(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[4][item1->g[0]], buff);

    return true;
}
