#include "buff401032.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff401032::run(Ground* ground)
{
    if (ground->m_round < 4)
    {
        return;
    }
    if (qrand() % 100 + 1 <= 100 - 25)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
}
