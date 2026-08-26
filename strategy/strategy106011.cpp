#include "strategy106011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff106011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy106011::Strategy106011()
{
    id = 106011;
}

Strategy106011::~Strategy106011()
{

}

bool Strategy106011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff106011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
