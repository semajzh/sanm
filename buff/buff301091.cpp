#include "buff301091.h"
#include "buff004.h"
#include "ground.h"
#include "log/logger.h"

void Buff3010911::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

float Buff3010912::run(Ground* ground, int obj)
{
    float point = 0;
    if (check004(ground, obj))
    {
        point = -8;
    }
    return point;
}

bool Buff3010912::check004(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 4)
        {
            return true;
        }
    }
    return false;
}
