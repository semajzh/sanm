#include "method0011922.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0011922.h"
#include "log/logger.h"
#include <QDebug>

Method0011922::Method0011922()
{
    type = 2222;
    id = 11922;
    luck = 70;
}

Method0011922::~Method0011922()
{

}

int Method0011922::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011922(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
