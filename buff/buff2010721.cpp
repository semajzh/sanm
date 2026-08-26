#include "buff2010721.h"
#include "ground.h"
#include "log/logger.h"

void Buff20107211::enter(Ground* ground)
{
    if (ground->m_round <= 0 || ground->m_round % 2 != 1)
    {
        return;
    }

    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 25, src, method);
    k0 = Ground::addkn(ground, des, 0, point1 + ground->m_group[src/10].m_item[src%10].i[1] / 25.5f); //349.98,38.72
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff20107211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    k0 = 0.0f;
}

void Buff20107211::run(Ground* ground)
{
    if (ground->m_round % 2 != 1)
    {
        return;
    }
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    k0 = 0.0f;
}

void Buff20107212::run(Ground* ground)
{
    if (ground->m_round % 2 != 0)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 220, src, method);
    QVector<int> objs = Ground::selectObjN(ground, src, 0x13);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}
