#include "strategy210011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff210011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy210011::Strategy210011()
{
    id = 210011;
}

Strategy210011::~Strategy210011()
{

}

bool Strategy210011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs;
    if (item1->g[1] == 0)
    {
        objs = Ground::selectObjN(ground, item1->g[0], 0x0013);
    }
    else
    {
        objs.append(item1->g[0]);
    }
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff210011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
