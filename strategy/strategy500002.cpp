#include "strategy500002.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500002.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500002::Strategy500002()
{
    id = 500002;
}

Strategy500002::~Strategy500002()
{

}

bool Strategy500002::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500002(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
