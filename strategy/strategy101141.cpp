#include "strategy101141.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101141.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101141::Strategy101141()
{
    id = 101141;
}

Strategy101141::~Strategy101141()
{

}

bool Strategy101141::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101141(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
