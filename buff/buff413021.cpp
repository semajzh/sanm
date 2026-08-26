#include "buff413021.h"
#include "ground.h"
#include "log/logger.h"

void Buff413021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -5);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff413021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff413021::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x12);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 50);
    }
}
