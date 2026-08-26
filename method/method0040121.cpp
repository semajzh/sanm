#include "method0040121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0040121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0040121::Method0040121()
{
    type = 21;
    id = 40121;
}

Method0040121::~Method0040121()
{

}

int Method0040121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00401211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00401212(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

