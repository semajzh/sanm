#include "strategy401023.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401023.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401023::Strategy401023()
{
    id = 401023;
}

Strategy401023::~Strategy401023()
{

}

bool Strategy401023::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401023(item1->g[0], obj, id, 8));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
