#include "method0160122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff016.h"
#include "buff/buff0160122.h"
#include "log/logger.h"

Method0160122::Method0160122()
{
    type = 2222;
    id = 160122;
    luck = 60;
}

Method0160122::~Method0160122()
{

}

int Method0160122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0031, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0160122(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    float point1 = Ground::pointbystar(ground, 30, item1->g[0], id);
    objs = Ground::selectObjN(ground, item1->g[0], 0x0241, item1->g[0]);
    for (int obj : objs)
    {
        float point2 = Ground::pointbyh0(ground, point1, obj, item1->g[0]);
        if (qrand() % 100 + 1 > 100 - point2)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}
