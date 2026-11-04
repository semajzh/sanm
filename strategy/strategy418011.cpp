#include "strategy418011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff418011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy418011::Strategy418011()
{
    id = 418011;
}

Strategy418011::~Strategy418011()
{

}

bool Strategy418011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff418011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
    return true;
}
