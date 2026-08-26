#include "strategy500005.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500005.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500005::Strategy500005()
{
    id = 500005;
}

Strategy500005::~Strategy500005()
{

}

bool Strategy500005::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500005(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
