#include "buff001390.h"
#include "ground.h"
#include "log/logger.h"

void Buff001390::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        l2 = Ground::addln(ground, des, 2, -9);
        ground->m_group[des/10].m_item[des%10].l[2] += l2;
    }
}

void Buff001390::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
    l2 = 0;
}

void Buff001390::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round > 0 && ground->m_round % 2 == 0)
    {
        ground->m_group[des/10].m_item[des%10].l[2] -= l2;
        l2 = 0;
    }
}

