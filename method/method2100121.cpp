#include "method2100121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2100121.h"
#include "log/logger.h"

Method2100121::Method2100121()
{
    type = 21;
    id = 2100121;
}

Method2100121::~Method2100121()
{

}

int Method2100121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21001211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21001212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
