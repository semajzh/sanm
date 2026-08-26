#include "buff001350.h"
#include "ground.h"
#include "log/logger.h"

void Buff001350::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -5);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff001350::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

