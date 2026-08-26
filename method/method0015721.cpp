#include "method0015721.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0015721.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0015721::Method0015721()
{
    type = 21;
    id = 15721;
}

Method0015721::~Method0015721()
{

}

int Method0015721::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0015721(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[6][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x11, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0015721(item1->g[0], obj, id, 4));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return 1;
}

