#include "strategy999999.h"
#include "ground.h"
#include "item.h"
#include "buff/buff999999.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy999999::Strategy999999()
{
    id = 999999;
}

Strategy999999::~Strategy999999()
{

}

bool Strategy999999::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff999999(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return true;
}
