#include "strategy001460.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001460.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001460::Strategy001460()
{
    id = 1460;
}

Strategy001460::~Strategy001460()
{

}

bool Strategy001460::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x5010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001460(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
