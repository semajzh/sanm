#include "strategy500001.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500001.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500001::Strategy500001()
{
    id = 500001;
}

Strategy500001::~Strategy500001()
{

}

bool Strategy500001::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500001(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
