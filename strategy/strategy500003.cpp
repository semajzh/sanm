#include "strategy500003.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500003.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500003::Strategy500003()
{
    id = 500003;
}

Strategy500003::~Strategy500003()
{

}

bool Strategy500003::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500003(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
