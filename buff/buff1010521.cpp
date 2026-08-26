#include "buff1010521.h"
#include "ground.h"
#include "log/logger.h"

void Buff10105211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = Ground::pointbystar(ground, 35, src, method);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff10105211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff10105212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int i = 0; i < 3; ++i)
    {
        ground->m_group[des/10].m_item[i].j[16] -= j16[i];
    }
}

void Buff10105212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 100, src, method);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        j16[obj%10] += 10;
        item2.j[16] += 10;
        Ground::hloi1(ground, &item1, &item2, method, point1);
    }
}
