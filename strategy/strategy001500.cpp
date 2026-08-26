#include "strategy001500.h"
#include "ground.h"
#include "item.h"
#include "buff/buff013.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001500::Strategy001500()
{
    id = 1500;
}

Strategy001500::~Strategy001500()
{

}

bool Strategy001500::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x21);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return true;
}
