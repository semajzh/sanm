#include "buff401052.h"
#include "ground.h"
#include "log/logger.h"

void Buff401052::run(Ground* ground)
{
    int obj = selectObjMaxi0(ground, des);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010522(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

int Buff401052::selectObjMaxi0(Ground* ground, int obj)
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

void Buff4010522::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] += 30;
}

void Buff4010522::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= 30;
}
