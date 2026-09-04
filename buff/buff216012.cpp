#include "buff216012.h"
#include "ground.h"
#include "log/logger.h"

void Buff216012::run(Ground* ground)
{
    if (ground->m_round != 4)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, src, 0x0013, src);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2160122(src, obj, method, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
}
