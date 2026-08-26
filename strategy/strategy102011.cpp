#include "strategy102011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff102011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy102011::Strategy102011()
{
    id = 102011;
}

Strategy102011::~Strategy102011()
{

}

bool Strategy102011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 0)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
