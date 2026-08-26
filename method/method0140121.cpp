#include "method0140121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0140121.h"
#include "log/logger.h"

Method0140121::Method0140121()
{
    type = 21;
    id = 140121;
}

Method0140121::~Method0140121()
{

}

int Method0140121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0140121(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[4][item1->g[0]], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0013);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01401212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
