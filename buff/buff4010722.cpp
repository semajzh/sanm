#include "buff4010722.h"
#include "buff021.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010722::run(Ground* ground, int obj)
{
    float point1 = Ground::pointbystar(ground, 50, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }
    if (check021(ground, obj))
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff021(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

bool Buff4010722::check021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 21)
        {
            return true;
        }
    }
    return false;
}
