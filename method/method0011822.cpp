#include "method0011822.h"
#include "ground.h"
#include "item.h"
#include "buff/buff014.h"
#include "buff/buff0011822.h"
#include "log/logger.h"
#include <QDebug>

Method0011822::Method0011822()
{
    type = 2222;
    id = 11822;
    luck = 55;
}

Method0011822::~Method0011822()
{

}

int Method0011822::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011822(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    return 1;
}
