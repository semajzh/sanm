#include "buff201071.h"
#include "buff014.h"
#include "ground.h"
#include "log/logger.h"

void Buff201071::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 35)
    {
        return;
    }

    QVector<int> objs1 = Ground::selectObjN(ground, des, 0x5010);
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x23);
    for (int obj1 : objs1)
    {
        for (int obj2 : objs2)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(obj1, obj2, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj2], buff);
        }
    }
}
