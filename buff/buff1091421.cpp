#include "buff1091421.h"
#include "ground.h"
#include "buff012.h"
#include "buff013.h"
#include "log/logger.h"

void Buff1091421::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    for (int obj : objs)
    {
        if (ground->m_round % 2 == 1)
        {
            ground->m_group[obj/10].m_item[obj%10].k[4] += point;
            ground->m_group[obj/10].m_item[obj%10].k[6] += point;
        }
        else
        {
            ground->m_group[obj/10].m_item[obj%10].k[5] += point;
            ground->m_group[obj/10].m_item[obj%10].k[7] += point;
        }
    }
}

void Buff1091421::run(Ground* ground)
{
    float jl = 35 + ground->m_group[src/10].m_item[src%10].i[2] / 20;
    bool luck = (qrand() % 100 + 1 > 100 - jl);
    for (int obj : objs)
    {
        if (ground->m_round % 2 == 1)
        {
            ground->m_group[obj/10].m_item[obj%10].k[5] += point;
            ground->m_group[obj/10].m_item[obj%10].k[7] += point;
            if (luck)
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(src, obj, method, 1));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            }
        }
        else
        {
            ground->m_group[obj/10].m_item[obj%10].k[4] += point;
            ground->m_group[obj/10].m_item[obj%10].k[6] += point;
            if (luck)
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(src, obj, method, 1));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            }
        }
    }

    int n = qrand() % 2 + 2;
    objs = Ground::selectObjN(ground, des, 0x20 + n);
    point = 30 + ground->m_group[src/10].m_item[src%10].i[2] / 30;
    for (int obj : objs)
    {
        if (ground->m_round % 2 == 1)
        {
            ground->m_group[obj/10].m_item[obj%10].k[4] -= point;
            ground->m_group[obj/10].m_item[obj%10].k[6] -= point;
        }
        else
        {
            ground->m_group[obj/10].m_item[obj%10].k[5] -= point;
            ground->m_group[obj/10].m_item[obj%10].k[7] -= point;
        }
    }
}
