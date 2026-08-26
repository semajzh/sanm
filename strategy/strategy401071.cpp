#include "strategy401071.h"
#include "ground.h"
#include "item.h"
#include "buff/buff102.h"
#include "buff/buff401071.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401071::Strategy401071()
{
    id = 401071;
}

Strategy401071::~Strategy401071()
{

}

bool Strategy401071::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401071(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
