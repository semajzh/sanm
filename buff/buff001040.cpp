#include "buff001040.h"
#include "buff014.h"
#include "ground.h"
#include "log/logger.h"

void Buff001040::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(src, obj, 1040, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
