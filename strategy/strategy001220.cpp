#include "strategy001220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001220.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001220::Strategy001220()
{
    id = 1220;
}

Strategy001220::~Strategy001220()
{

}

bool Strategy001220::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
