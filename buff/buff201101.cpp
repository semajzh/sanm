#include "buff201101.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff201101::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
