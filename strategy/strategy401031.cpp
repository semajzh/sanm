#include "strategy401031.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401031.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401031::Strategy401031()
{
    id = 401031;
}

Strategy401031::~Strategy401031()
{

}

bool Strategy401031::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401031(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
