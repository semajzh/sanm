#include "strategy301071.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301071.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301071::Strategy301071()
{
    id = 301071;
}

Strategy301071::~Strategy301071()
{

}

bool Strategy301071::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301071(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}

