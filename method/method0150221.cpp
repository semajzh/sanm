#include "method0150221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0150221.h"
#include "log/logger.h"

Method0150221::Method0150221()
{
    type = 21;
    id = 150221;
}

Method0150221::~Method0150221()
{

}

int Method0150221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0013);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01502211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01502212(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[4][item1->g[0]], buff);

    return 1;
}
