#include "strategy001570.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001570.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001570::Strategy001570()
{
    id = 1570;
}

Strategy001570::~Strategy001570()
{

}

bool Strategy001570::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001570(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
