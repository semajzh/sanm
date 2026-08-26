#include "method4060221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4060221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method4060221::Method4060221()
{
    type = 21;
    id = 4060221;
}

Method4060221::~Method4060221()
{

}

int Method4060221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40602211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[4][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40602212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

