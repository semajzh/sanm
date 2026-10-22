#include "strategy401042.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401042.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401042::Strategy401042()
{
    id = 401042;
}

Strategy401042::~Strategy401042()
{

}

bool Strategy401042::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401042(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
