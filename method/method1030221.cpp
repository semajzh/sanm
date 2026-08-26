#include "method1030221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1030221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1030221::Method1030221()
{
    type = 21;
    id = 1030221;
}

Method1030221::~Method1030221()
{

}

int Method1030221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0111 + item1->g[1] * 0x100, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff1030221>(new Buff1030221(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[4][obj], buff);
    }

    return 1;
}
