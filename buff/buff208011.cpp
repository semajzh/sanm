#include "buff208011.h"
#include "ground.h"
#include "log/logger.h"

void Buff208011::enter(Ground* ground)
{
    if (ground->m_round < 1)
    {
        Logger::H().printbuffenter(ground, src, des, this);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
        for (int obj : objs)
        {
            k0[obj%10] = Ground::addkn(ground, obj, 0, 3 + ground->m_group[src/10].m_item[src%10].i[1] / 200); //422.36,5.02-3
            ground->m_group[obj/10].m_item[obj%10].k[0] += k0[obj%10];
        }
    }
    if (ground->m_round == 5)
    {
        Logger::H().printbuffenter(ground, src, des, this);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
        for (int obj : objs)
        {
            l0[obj%10] = Ground::addln(ground, obj, 0, -3 - ground->m_group[src/10].m_item[src%10].i[1] / 200); //422.36,5.02-3
            ground->m_group[obj/10].m_item[obj%10].l[0] += l0[obj%10];
        }
    }
}

void Buff208011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int i = 0; i < 3; ++i)
    {
        ground->m_group[des/10].m_item[i].k[0] -= k0[i];
        ground->m_group[des/10].m_item[i].l[0] -= l0[i];
    }
}

void Buff208011::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round == 4)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[des/10].m_item[i].k[0] -= k0[i];
            k0[i] = 0.0f;
        }
    }
    if (ground->m_round == 8)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[des/10].m_item[i].l[0] -= l0[i];
            l0[i] = 0.0f;
        }
    }
}

