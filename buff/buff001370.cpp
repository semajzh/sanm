#include "buff001370.h"
#include "ground.h"
#include "log/logger.h"

void Buff001370::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l1 = Ground::addln(ground, des, 0, -9);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
}

void Buff001370::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}

