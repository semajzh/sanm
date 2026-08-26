#include "strategy001590.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001590.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001590::Strategy001590()
{
    id = 1590;
}

Strategy001590::~Strategy001590()
{

}

bool Strategy001590::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001590(item1->g[0], obj, id, 3));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    return true;
}
