#include "buff406021.h"
#include "ground.h"
#include "log/logger.h"

void Buff406021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -(5 + ground->m_group[src/10].m_item[src%10].i[2] / 80));
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff406021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
