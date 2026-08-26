#include "strategy411021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff411021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy411021::Strategy411021()
{
    id = 411021;
}

Strategy411021::~Strategy411021()
{

}

bool Strategy411021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff411021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
