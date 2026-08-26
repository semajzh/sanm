#include "buff201031.h"
#include "ground.h"
#include "log/logger.h"

void Buff201031::enter(Ground* ground)
{
    if (ground->m_round <= 0)
    {
        return;
    }

    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        objs = Ground::selectObjN(ground, des, 0x22);
        for (int obj : objs)
        {
            l0ex = 12;
            ground->m_group[obj/10].m_item[obj%10].l[0] += l0ex;
        }
    }
    if (ground->m_round % 2 == 0)
    {
        objs = Ground::selectObjN(ground, des, 0x12);
        for (int n = 0; n < objs.size(); ++n)
        {
            l0[n] = Ground::addln(ground, objs[n], 0, -12);
            ground->m_group[objs[n]/10].m_item[objs[n]%10].l[0] += l0[n];
        }
    }
}

void Buff201031::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].l[0] -= l0ex;
        l0ex = 0.0f;
    }
    for (int n = 0; n < objs.size(); ++n)
    {
        ground->m_group[objs[n]/10].m_item[objs[n]%10].l[0] -= l0[n];
        l0[n] = 0.0f;
    }
}

void Buff201031::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        for (int obj : objs)
        {
            ground->m_group[obj/10].m_item[obj%10].l[0] -= l0ex;
            l0ex = 0.0f;
        }
    }
    if (ground->m_round % 2 == 0)
    {
        for (int n = 0; n < objs.size(); ++n)
        {
            ground->m_group[objs[n]/10].m_item[objs[n]%10].l[0] -= l0[n];
            l0[n] = 0.0f;
        }
    }
}
