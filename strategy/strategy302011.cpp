#include "strategy302011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff302011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy302011::Strategy302011()
{
    id = 302011;
}

Strategy302011::~Strategy302011()
{

}

bool Strategy302011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff302011(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}
