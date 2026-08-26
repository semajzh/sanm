#include "strategy301021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301021::Strategy301021()
{
    id = 301021;
}

Strategy301021::~Strategy301021()
{

}

bool Strategy301021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301021(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

