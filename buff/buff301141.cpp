#include "buff301141.h"
#include "ground.h"
#include "log/logger.h"

void Buff301141::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l1 = Ground::addbyix(ground, 8, ground->m_group[src/10].m_item[src%10].i[2]);
    l1 = Ground::addln(ground, des, 0, -l1);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
}

void Buff301141::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}
