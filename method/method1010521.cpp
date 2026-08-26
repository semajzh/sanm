#include "method1010521.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010521.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1010521::Method1010521()
{
    type = 21;
    id = 1010521;
}

Method1010521::~Method1010521()
{

}

int Method1010521::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 6);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10105211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10105212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

