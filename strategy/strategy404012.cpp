#include "strategy404012.h"
#include "ground.h"
#include "item.h"
#include "buff/buff404012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy404012::Strategy404012()
{
    id = 404012;
}

Strategy404012::~Strategy404012()
{

}

bool Strategy404012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff404012(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

