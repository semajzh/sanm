#include "strategy101061.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101061.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101061::Strategy101061()
{
    id = 101061;
}

Strategy101061::~Strategy101061()
{

}

bool Strategy101061::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101061(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
