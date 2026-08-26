#include "strategy309011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff309011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy309011::Strategy309011()
{
    id = 309011;
}

Strategy309011::~Strategy309011()
{

}

bool Strategy309011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff309011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
