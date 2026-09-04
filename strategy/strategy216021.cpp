#include "strategy216021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff216021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy216021::Strategy216021()
{
    id = 216021;
}

Strategy216021::~Strategy216021()
{

}

bool Strategy216021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff216021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
