#include "strategy401022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401022.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401022::Strategy401022()
{
    id = 401022;
}

Strategy401022::~Strategy401022()
{

}

bool Strategy401022::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401022(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return true;
}
