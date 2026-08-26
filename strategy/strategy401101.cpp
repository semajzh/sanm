#include "strategy401101.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401101.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401101::Strategy401101()
{
    id = 401101;
}

Strategy401101::~Strategy401101()
{

}

bool Strategy401101::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401101(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}
