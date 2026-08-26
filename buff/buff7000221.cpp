#include "buff7000221.h"
#include "buff015.h"
#include "buff016.h"
#include "buff017.h"
#include "ground.h"
#include "log/logger.h"

bool Buff7000221::run(Ground* ground, int obj)
{
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(src, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff016(src, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);

//        QSharedPointer<Buff> buff3 = QSharedPointer<Buff>(new Buff017(src, obj, method, 2));
//        Ground::addBuff(ground, ground->buff[1][obj], buff3);
    }

    return true;
}
