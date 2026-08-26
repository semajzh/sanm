#include "strategy001650.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001650.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001650::Strategy001650()
{
    id = 1650;
}

Strategy001650::~Strategy001650()
{

}

bool Strategy001650::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001650(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
