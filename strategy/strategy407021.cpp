#include "strategy407021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff407021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy407021::Strategy407021()
{
    id = 407021;
}

Strategy407021::~Strategy407021()
{

}

bool Strategy407021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff407021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
