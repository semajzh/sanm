#include "buff301081.h"
#include "ground.h"
#include "log/logger.h"

void Buff301081::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l1 = Ground::addln(ground, des, 1, -5);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
    ground->m_group[des/10].m_item[des%10].j[11] += 5;
}

void Buff301081::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
    ground->m_group[des/10].m_item[des%10].j[11] -= 5;
}

void Buff301081::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], 301081, 30);
    }
}
