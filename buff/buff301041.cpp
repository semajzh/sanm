#include "buff301041.h"
#include "ground.h"
#include "log/logger.h"

void Buff301041::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l2 = Ground::addln(ground, des, 2, -6);
    ground->m_group[des/10].m_item[des%10].l[2] += l2;
}

void Buff301041::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
}

void Buff301041::run(Ground* ground)
{
    if (ground->m_round == 3)
    {
        i1 = 30;
        ground->m_group[des/10].m_item[des%10].i[1] += i1;
    }
}

