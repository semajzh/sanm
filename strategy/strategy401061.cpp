#include "strategy401061.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401061.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401061::Strategy401061()
{
    id = 401061;
}

Strategy401061::~Strategy401061()
{

}

bool Strategy401061::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401061(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
