#include "buff001380.h"
#include "ground.h"
#include "log/logger.h"

void Buff001380::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l2 = Ground::addln(ground, des, 2, -5.5f);
    ground->m_group[des/10].m_item[des%10].l[2] += l2;
}

void Buff001380::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
}

