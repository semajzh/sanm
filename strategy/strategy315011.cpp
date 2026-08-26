#include "strategy315011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff315011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy315011::Strategy315011()
{
    id = 315011;
}

Strategy315011::~Strategy315011()
{

}

bool Strategy315011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff315011(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[5][item1->g[0]], buff);

    return true;
}
