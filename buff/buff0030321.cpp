#include "buff0030321.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff0030321::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 8, src, method, -1);
    if (qrand() % 100 + 1 <= 100 - meta)
    {
        meta -= point1;
        return;
    }
    meta -= point1;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(src, obj, method, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
}
