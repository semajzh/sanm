#include "buff3010121.h"
#include "ground.h"
#include "log/logger.h"

void Buff3010121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    float point1 = Ground::pointbystar(ground, 7, src, method);
    float point2 = Ground::pointbystar(ground, 28, src, method);
    float point3 = Ground::pointbystar(ground, 5, src, method);

    float maxi = Ground::getMaxi(ground, src);
    point1 = Ground::addbyix(ground, point1, maxi, 900);
    point2 = Ground::addbyix(ground, point2, maxi, 900);
    point3 = Ground::addbyix(ground, point3, maxi, 900);

    j4 = meta * point1;
    j7 = (2 - meta) * point2;
    l1 = Ground::addln(ground, des, 1, meta * -point3);
    l2 = Ground::addln(ground, des, 2, (2 - meta) * -point3);
    ground->m_group[des/10].m_item[des%10].j[4] += j4;
    ground->m_group[des/10].m_item[des%10].j[7] += j7;
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
    ground->m_group[des/10].m_item[des%10].l[2] += l2;
}

void Buff3010121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
}
