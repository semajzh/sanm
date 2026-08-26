#include "buff401141.h"
#include "buff012.h"
#include "ground.h"
#include "log/logger.h"

void Buff401141::run(Ground* ground)
{
    if (first)
    {
        first = false;

        QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
        if (objs.size() > 0)
        {
            int obj = objs.front();
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(des, obj, 4011422, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }
}
