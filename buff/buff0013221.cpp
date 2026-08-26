#include "buff0013221.h"
#include "ground.h"
#include "log/logger.h"

void Buff00132211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    l1 = Ground::addln(ground, des, 1, -point1);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
}

void Buff00132211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}

void Buff00132211::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 80, src, method);
    Item& item1 = ground->m_group[src/10].m_item[src%10];
    Item& item2 = ground->m_group[des/10].m_item[des%10];
    Ground::hloi(ground, &item1, &item2, method, point1, (item2.i[1]+item2.i[2])/2);
}

void Buff00132212::run(Ground* ground)
{
    if (qrand() % 100 + 1 > 100 - 50)
    {
        float point1 = Ground::pointbystar(ground, 100, src, method);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
        if (objs.size() > 0)
        {
            int obj = objs.front();
            Item& item1 = ground->m_group[des/10].m_item[des%10];
            Item& item2 = ground->m_group[obj/10].m_item[obj%10];
            Ground::actbr(ground, &item1, &item2, method, point1);
        }
    }
}
