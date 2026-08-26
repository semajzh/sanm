#include "strategy402022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff402022.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy402022::Strategy402022()
{
    id = 402022;
}

Strategy402022::~Strategy402022()
{

}

bool Strategy402022::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff402022(item1->g[0], item1->g[0], id));
    ground->addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}
