#include "buff0040121.h"
#include "ground.h"
#include "log/logger.h"

void Buff00401211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 24, src, method);
    l0 = Ground::addln(ground, des, 0, -(point1 + ground->m_group[src/10].m_item[src%10].i[1] / 36));
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff00401211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff00401212::run(Ground* ground)
{
    if (ground->m_round == 4)
    {
        float point1 = Ground::pointbystar(ground, 360, src, method);
        Item& item1 = ground->m_group[src/10].m_item[src%10];
        QVector<int> objs = Ground::selectObjN(ground, item1.g[0], 0x13);
        for (int obj : objs)
        {
            Ground::hloi1(ground, &item1, &(ground->m_group[obj/10].m_item[obj%10]), method, point1);
        }
    }
}
