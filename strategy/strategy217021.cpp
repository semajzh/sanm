#include "strategy217021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff217021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy217021::Strategy217021()
{
    id = 217021;
}

Strategy217021::~Strategy217021()
{

}

bool Strategy217021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0031);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2170211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2170212(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[5][item1->g[0]], buff);

    return true;
}
