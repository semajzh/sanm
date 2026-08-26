#include "strategy201011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201011::Strategy201011()
{
    id = 201011;
}

Strategy201011::~Strategy201011()
{

}

bool Strategy201011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
