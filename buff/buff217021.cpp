#include "buff217021.h"
#include "buff2170221.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

float Buff2170211::run(Ground* ground, int obj)
{
    float point = 0;
    if (check21702212(ground, obj))
    {
        point = 0 - Ground::addbyix(ground, 4, ground->m_group[src/10].m_item[src%10].i[2]);
    }
    return point;
}

bool Buff2170211::check21702212(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 21702212)
        {
            return true;
        }
    }
    return false;
}

void Buff2170212::run(Ground* ground)
{
    if (ground->m_round != 4)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0023);
    for (int obj : objs)
    {
        for (int n = 0; n < 2; ++n)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21702212(des, obj, method, 1));
            Ground::addBuff(ground, ground->buff[6][obj], buff);
        }
    }
}
