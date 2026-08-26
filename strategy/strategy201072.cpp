#include "strategy201072.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201072.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201072::Strategy201072()
{
    id = 201072;
}

Strategy201072::~Strategy201072()
{

}

bool Strategy201072::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201072(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
