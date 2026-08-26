#include "buff205012.h"
#include "ground.h"
#include "log/logger.h"

void Buff205012::enter(Ground* ground)
{
    if (ground->m_round <= 0)
    {
        return;
    }

    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        l1 = Ground::addln(ground, des, 1, -4 - ground->m_group[src/10].m_item[src%10].i[0]/100);
        ground->m_group[des/10].m_item[des%10].l[1] += l1;
    }
    if (ground->m_round % 2 == 0)
    {
        l2 = Ground::addln(ground, des, 2, -4 - ground->m_group[src/10].m_item[src%10].i[1]/100);
        ground->m_group[des/10].m_item[des%10].l[2] += l2;
    }
}

void Buff205012::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        ground->m_group[des/10].m_item[des%10].l[1] -= l1;
        l1 = 0.0f;
    }
    if (ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].l[2] -= l2;
        l2 = 0.0f;
    }
}

void Buff205012::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        ground->m_group[des/10].m_item[des%10].l[1] -= l1;
        l1 = 0.0f;
    }
    if (ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].l[2] -= l2;
        l2 = 0.0f;
    }
}
