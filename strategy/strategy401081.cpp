#include "strategy401081.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401081.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401081::Strategy401081()
{
    id = 401081;
}

Strategy401081::~Strategy401081()
{

}

bool Strategy401081::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401081(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
