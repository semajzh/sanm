#include "strategy500004.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500004.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500004::Strategy500004()
{
    id = 500004;
}

Strategy500004::~Strategy500004()
{

}

bool Strategy500004::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500004(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
