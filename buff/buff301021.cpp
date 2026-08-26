#include "buff301021.h"
#include "ground.h"
#include "buff001.h"
#include "log/logger.h"

bool Buff301021::run(Ground* ground, int obj, int exid)
{
//    if (qrand() % 100 + 1 <= 100 - 60)
//    {
//        return;
//    }

//    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
//    if (objs.size() > 0)
//    {
//        int obj = objs.front();
//        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(des, obj, 301021, 2));
//        Ground::addBuff(ground, ground->buff[1][obj], buff);
//    }
    if (des/10 == obj/10)
    {
        return false;
    }
    if (exid != 1)
    {
        return false;
    }
    if (qrand() % 100 + 1 <= 100 - 35)
    {
        return false;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 2)
    {
        return false;
    }
    return true;
}
