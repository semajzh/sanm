#include "strategy401141.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401141.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401141::Strategy401141()
{
    id = 401141;
}

Strategy401141::~Strategy401141()
{

}

bool Strategy401141::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401141(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
