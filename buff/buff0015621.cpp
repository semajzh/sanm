#include "buff0015621.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff0015621::run(Ground* ground)
{
    if (ground->m_round > 3)
    {
        return;
    }
    if (qrand() % 100 + 1 <= 100 - 74.75f)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
}
