#include "strategy201022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201022.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201022::Strategy201022()
{
    id = 201022;
}

Strategy201022::~Strategy201022()
{

}

bool Strategy201022::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201022(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
