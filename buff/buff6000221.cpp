#include "buff6000221.h"
#include "buff007.h"
#include "ground.h"
#include "log/logger.h"

void Buff6000221::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff007(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
