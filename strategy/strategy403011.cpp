#include "strategy403011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff403011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy403011::Strategy403011()
{
    id = 403011;
}

Strategy403011::~Strategy403011()
{

}

bool Strategy403011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff403011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}

