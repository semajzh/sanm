#include "method1010221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1010221::Method1010221()
{
    type = 21;
    id = 1010221;
}

Method1010221::~Method1010221()
{

}

int Method1010221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3011, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10102211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10102212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
