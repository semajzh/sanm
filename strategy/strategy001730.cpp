#include "strategy001730.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001730.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001730::Strategy001730()
{
    id = 1730;
}

Strategy001730::~Strategy001730()
{

}

bool Strategy001730::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001730(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
