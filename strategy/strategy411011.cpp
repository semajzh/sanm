#include "strategy411011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff411011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy411011::Strategy411011()
{
    id = 411011;
}

Strategy411011::~Strategy411011()
{

}

bool Strategy411011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] != 0)
    {
        return true;
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4110111(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4110112(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

