#include "strategy312011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff312011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy312011::Strategy312011()
{
    id = 312011;
}

Strategy312011::~Strategy312011()
{

}

bool Strategy312011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff312011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}
