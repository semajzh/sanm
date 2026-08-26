#include "buff1010121.h"
#include "ground.h"
#include "log/logger.h"

void Buff10101211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = 14 + 0.4 * ground->m_group[src/10].m_item[src%10].star/2;
    float point2 = 6 + 0.1 * ground->m_group[src/10].m_item[src%10].star/2;
    l0 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 30;//10.99,325.79,5.42
    l0 = Ground::addln(ground, des, 0, -l0); //23.49,36.81
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    j11 = point2 + ground->m_group[src/10].m_item[src%10].i[1] / 60;
    j12 = point2 + ground->m_group[src/10].m_item[src%10].i[1] / 60;
    ground->m_group[des/10].m_item[des%10].j[11] += j11;
    ground->m_group[des/10].m_item[des%10].j[12] += j12;
}

void Buff10101211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    ground->m_group[des/10].m_item[des%10].j[11] -= j11;
    ground->m_group[des/10].m_item[des%10].j[12] -= j12;
}

void Buff10101212::run(Ground* ground)
{
    float point1 = 30 + 0.9 * ground->m_group[src/10].m_item[src%10].star/2;
    float point2 = 40 + 1.2 * ground->m_group[src/10].m_item[src%10].star/2;
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }
    Item& item1 = ground->m_group[src/10].m_item[src%10];
    Item& item2 = ground->m_group[des/10].m_item[des%10];
    Ground::hloi(ground, &item1, &item2, method, point2, (item1.i[1] + item1.i[2]) / 2);
}
