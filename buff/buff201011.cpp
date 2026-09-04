#include "buff201011.h"
#include "buff111.h"
#include "ground.h"
#include "log/logger.h"

void Buff201011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j15 = Ground::addbyix(ground, 12, ground->m_group[des/10].m_item[des%10].i[1]);
    ground->m_group[des/10].m_item[des%10].j[15] += j15;
}

void Buff201011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[15] -= j15;
}

void Buff201011::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = count % 4;
    }
    if (++count != 4)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, des, 0x11);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
