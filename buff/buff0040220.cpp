#include "buff0040220.h"
#include "ground.h"
#include "log/logger.h"

void Buff00402201::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff00402201::run(Ground* ground)
{
    if (count++ < 3)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        float k = Ground::addkn(ground, des, 0, point1);
        ground->m_group[des/10].m_item[des%10].k[0] += k;
        k0 += k;
    }
}

void Buff00402202::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    if (qrand() % 100 + 1 > 100 - 55)
    {
        float point1 = Ground::pointbystar(ground, 200, src, method);
        Ground::hloi(ground, &item1, &item1, method, point1, maxi(ground, des));
    }
    if (qrand() % 100 + 1 > 100 - 55)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00402203(des, des, method, 1));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    }
}

float Buff00402202::maxi(Ground* ground, int obj)
{
    float max = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (max < ground->m_group[obj/10].m_item[obj%10].i[i])
        {
            max = ground->m_group[obj/10].m_item[obj%10].i[i];
        }
    }
    return max;
}

void Buff00402203::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    l0 = Ground::addln(ground, des, 0, -point1);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff00402203::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
