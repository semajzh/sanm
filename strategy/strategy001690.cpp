#include "strategy001690.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001690.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001690::Strategy001690()
{
    id = 1690;
}

Strategy001690::~Strategy001690()
{

}

bool Strategy001690::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001690(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
