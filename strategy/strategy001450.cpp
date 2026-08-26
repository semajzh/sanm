#include "strategy001450.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001450.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001450::Strategy001450()
{
    id = 1450;
}

Strategy001450::~Strategy001450()
{

}

bool Strategy001450::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001450(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
