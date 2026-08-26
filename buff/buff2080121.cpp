#include "buff2080121.h"
#include "ground.h"
#include "log/logger.h"

void Buff20801211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 10, src, method);
    // l2 (i1)
    // 10 (342.58) = 15.03
    // 10 (356.94) = 15.29
    // 10 (375.95) = 15.63
    l2 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 67;
    l2 = (src == des) ? l2 * 1.3 : l2;
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
}

void Buff20801211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] += l2;
}

void Buff20801212::run(Ground* ground)
{
    float hlo = Ground::getDataHlo(ground, des);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], 2080121, 60 + hlo / 100); //
    }
}

void Buff20801213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Item& item = ground->m_group[des/10].m_item[des%10];
    k7 = (item.i[0] > item.i[1]);
    item.k[11] += 20;
}

void Buff20801213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[11] -= 20;
}

void Buff20801213::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x21 + qrand() % 2);
    for (int obj : objs)
    {
        if (k7)
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 160);
        }
        else
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 160);
        }
    }
}

void Buff20801214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -12 - ground->m_group[src/10].m_item[src%10].i[1] / 50); //357.36,7.82
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff20801214::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
