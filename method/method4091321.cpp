#include "method4091321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4091321.h"
#include "log/logger.h"
#include <QSharedPointer>

Method4091321::Method4091321()
{
    type = 21;
    id = 4091321;
}

Method4091321::~Method4091321()
{

}

int Method4091321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4091321(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return 1;
}

