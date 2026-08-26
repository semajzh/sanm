#include "strategy315021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff315021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy315021::Strategy315021()
{
    id = 315021;
}

Strategy315021::~Strategy315021()
{

}

bool Strategy315021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff315021(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}
