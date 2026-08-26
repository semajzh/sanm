#include "method4091221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4091221.h"
#include "log/logger.h"

Method4091221::Method4091221()
{
    type = 21;
    id = 4091221;
}

Method4091221::~Method4091221()
{

}

int Method4091221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4091221(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40912212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
