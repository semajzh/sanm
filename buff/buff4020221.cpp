#include "buff4020221.h"
#include "ground.h"
#include "log/logger.h"

void Buff4020221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 15, src, method);
    l2 = Ground::addln(ground, des, 2, -(point1 + ground->m_group[src/10].m_item[src%10].i[1] / 60));
    ground->m_group[des/10].m_item[des%10].l[2] += l2;
}

void Buff4020221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
}

void Buff4020221::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 140, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[0]);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
    }
}
