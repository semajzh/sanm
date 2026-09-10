#include "strategy001860.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001860.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001860::Strategy001860()
{
    id = 1860;
}

Strategy001860::~Strategy001860()
{

}

bool Strategy001860::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001860(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
