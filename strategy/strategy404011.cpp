#include "strategy404011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff404011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy404011::Strategy404011()
{
    id = 404011;
}

Strategy404011::~Strategy404011()
{

}

bool Strategy404011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff404011(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}

