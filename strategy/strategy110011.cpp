#include "strategy110011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff110011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy110011::Strategy110011()
{
    id = 110011;
}

Strategy110011::~Strategy110011()
{

}

bool Strategy110011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff110011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
