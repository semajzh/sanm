#include "buff312011.h"
#include "buff3120121.h"
#include "ground.h"
#include "log/logger.h"

void Buff312011::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, des, 0x6020);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31201212(des, obj, method, 5));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
}

