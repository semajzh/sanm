#include "strategy500006.h"
#include "ground.h"
#include "item.h"
#include "buff/buff500006.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy500006::Strategy500006()
{
    id = 500006;
}

Strategy500006::~Strategy500006()
{

}

bool Strategy500006::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff500006(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
