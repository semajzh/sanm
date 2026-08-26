#include "method0120122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff014.h"
#include "buff/buff106.h"
#include "log/logger.h"

Method0120122::Method0120122()
{
    type = 2222;
    id = 120122;
    luck = 70;
}

Method0120122::~Method0120122()
{

}

int Method0120122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    float point1 = Ground::pointbystar(ground, 5, item1->g[0], id);
    float point = Ground::addbyix(ground, point1, item1->i[3]);
    point = item1->h[0] * point / 100;
    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff106(item1->g[0], obj, id, point));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
