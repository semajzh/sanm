#include "buff1020120.h"
#include "ground.h"
#include "buff111.h"
#include "log/logger.h"

void Buff1020120::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j13 = Ground::pointbystar(ground, 20, src, method);
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
}

void Buff1020120::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}

void Buff1020120::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    int jl = 10 - (float)(ground->m_group[des/10].m_item[des%10].h[0]) / ground->m_group[des/10].m_item[des%10].h[3] * 10;
    if (qrand() % 100 + 1 <= 100 - point1 - jl)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff1020120::run(Ground* ground, int obj, float point)
{
    if (ground->m_group[des/10].m_item[des%10].g[1] != 0)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 50, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0221, obj);
    for (int obj : objs)
    {
        Ground::actcd(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point * point1 / 100);
    }
}
