#include "buff2010420.h"
#include "ground.h"
#include "log/logger.h"

void Buff2010420::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 35, src, method);
    j9 = Ground::addj9(ground, des, 9, point1);
    ground->m_group[des/10].m_item[des%10].j[9] += j9;
}

void Buff2010420::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[9] -= j9;
}

void Buff2010420::run(Ground* ground)
{
    if (m_round != ground->m_round)
    {
        m_round = ground->m_round;
        m_count = 0;
    }
    if (m_count >= 7)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 90, src, method);
    float point2 = Ground::pointbystar(ground, 10, src, method, -1);

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actbr(ground, &item1, &item2, method, point1 - m_count * point2);
    }
    ++m_count;
}
