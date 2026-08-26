#include "method0011721.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0011721.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0011721::Method0011721()
{
    type = 21;
    id = 11721;
}

Method0011721::~Method0011721()
{

}

int Method0011721::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011721(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

