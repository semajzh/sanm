#include "strategy401041.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401041.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401041::Strategy401041()
{
    id = 401041;
}

Strategy401041::~Strategy401041()
{

}

bool Strategy401041::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401041(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
