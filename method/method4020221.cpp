#include "method4020221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4020221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method4020221::Method4020221()
{
    type = 21;
    id = 4020221;
}

Method4020221::~Method4020221()
{

}

int Method4020221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs;
    if (check402022(ground, item1->g[0]))
    {
        objs = Ground::selectObjN(ground, item1->g[0], 0x0013, item1->g[0]);
    }
    else
    {
        objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    }
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4020221(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

bool Method4020221::check402022(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 402022)
        {
            return true;
        }
    }
    return false;
}
