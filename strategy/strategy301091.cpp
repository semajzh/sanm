#include "strategy301091.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301091.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301091::Strategy301091()
{
    id = 301091;
}

Strategy301091::~Strategy301091()
{

}

bool Strategy301091::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010911(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010912(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}

