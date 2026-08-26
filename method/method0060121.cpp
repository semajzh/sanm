#include "method0060121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0060121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0060121::Method0060121()
{
    type = 21;
    id = 60121;
}

Method0060121::~Method0060121()
{

}

int Method0060121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 6);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00601211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00601212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

