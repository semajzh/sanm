#include "strategy101051.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101051.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101051::Strategy101051()
{
    id = 101051;
}

Strategy101051::~Strategy101051()
{

}

bool Strategy101051::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101051(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}

