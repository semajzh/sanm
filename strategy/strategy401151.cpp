#include "strategy401151.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401151.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401151::Strategy401151()
{
    id = 401151;
}

Strategy401151::~Strategy401151()
{

}

bool Strategy401151::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401151(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
