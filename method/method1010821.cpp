#include "method1010821.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010821.h"
#include "log/logger.h"

Method1010821::Method1010821()
{
    type = 21;
    id = 1010821;
}

Method1010821::~Method1010821()
{

}

int Method1010821::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10108211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10108212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
