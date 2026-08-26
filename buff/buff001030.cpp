#include "buff001030.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff001030::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x12, des);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(src, obj, 1030, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
}

