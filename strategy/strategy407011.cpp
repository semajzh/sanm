#include "strategy407011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff407011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy407011::Strategy407011()
{
    id = 407011;
}

Strategy407011::~Strategy407011()
{

}

bool Strategy407011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff407011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
