#include "buff4110121.h"
#include "ground.h"
#include "log/logger.h"

void Buff41101211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    l1 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (ground->m_group[des/10].m_item[des%10].f[2] == 1)
    {
        l1 *= 1 + (float)50/100;
    }
    l1 = Ground::addln(ground, des, 1, -l1);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
}

void Buff41101211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}

void Buff41101212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 35, src, method);
    float jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, src, 0x1010);
    for (int obj : objs)
    {
        float point2 = Ground::pointbystar(ground, 90, src, method);
        float point = (ground->m_group[obj/10].m_item[obj%10].f[2] == 1) ? Ground::pointbyh0(ground, point2, obj, des) : point2;
        Ground::actbr(ground, &ground->m_group[obj/10].m_item[obj%10], &ground->m_group[des/10].m_item[des%10], method, point);
    }
}
