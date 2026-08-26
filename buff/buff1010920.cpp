#include "buff1010920.h"
#include "ground.h"
#include "log/logger.h"

void Buff1010920::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10109202(des, des, 1010920, 1));
    Ground::addBuff(ground, ground->buff[1][des], buff);
    Logger::H().printbuff(ground, &item1, &item1, buff.data());
}

void Buff10109202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 40, src, method);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    i0 = item1.i[3] * point1 / 100;
    item1.i[0] += i0;
}

void Buff10109202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
    k0 = 0.0f;
    j0 = 0.0f;
}

void Buff10109202::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 5, src, method);
    float point2 = Ground::pointbystar(ground, 30, src, method);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = selectObj(ground, des);
    for (int obj : objs)
    {
        float value = point1 + item1.i[3] / 163;
        float k = Ground::addkn(ground, des, 0, value);
        item1.k[0] += k;
        k0 += k;
        item1.j[0] += value;
        j0 += value;
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
    }
}

QVector<int> Buff10109202::selectObj(Ground* ground, int pos)
{
    QVector<int> objs;
    int g = 1 - pos / 10;
    for (int i = 0; i < 3; ++i)
    {
        Item& item2 = ground->m_group[g].m_item[i];
        if (item2.h[0] > 0 && ground->m_group[pos/10].m_item[pos%10].i[3] > item2.i[3])
        {
            objs.append(item2.g[0]);
        }
    }
    return objs;
}
