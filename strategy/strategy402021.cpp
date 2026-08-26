#include "strategy402021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff402021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy402021::Strategy402021()
{
    id = 402021;
}

Strategy402021::~Strategy402021()
{

}

bool Strategy402021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff402021(item1->g[0], obj, id));
        ground->addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
