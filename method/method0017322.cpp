#include "method0017322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff014.h"
#include "buff/buff0017322.h"
#include "log/logger.h"

Method0017322::Method0017322()
{
    type = 2222;
    id = 17322;
    luck = 50;
}

Method0017322::~Method0017322()
{

}

int Method0017322::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff0017322(item1->g[0], item1->g[0], id, 2));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff2);

    return 1;
}
