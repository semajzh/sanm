#include "strategy001280.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001280.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001280::Strategy001280()
{
    id = 1280;
}

Strategy001280::~Strategy001280()
{

}

bool Strategy001280::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001280(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
