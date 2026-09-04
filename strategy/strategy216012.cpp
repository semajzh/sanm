#include "strategy216012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff216012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy216012::Strategy216012()
{
    id = 216012;
}

Strategy216012::~Strategy216012()
{

}

bool Strategy216012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff216012(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
