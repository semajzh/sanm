#include "buff401051.h"
#include "ground.h"
#include "log/logger.h"

void Buff401051::run(Ground* ground)
{
    int obj = selectObjMaxi0(ground, des);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010512(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

int Buff401051::selectObjMaxi0(Ground* ground, int obj)
{
    int g = obj / 10;
    int max = 0;
    int obj2 = -1;
    for (int i = 0; i < 3; ++i)
    {
        if (g*10+i == obj)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].i[0] > max)
        {
            max = ground->m_group[g].m_item[i].i[0];
            obj2 = g*10+i;
        }
    }
    return obj2;
}

void Buff4010512::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j13 = Ground::addjn(ground, des, 13, 9);
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
}

void Buff4010512::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}
