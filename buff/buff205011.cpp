#include "buff205011.h"
#include "ground.h"
#include "log/logger.h"

void Buff205011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    index = Ground::getMaxiIndex(ground, des);
    ix = ground->m_group[des/10].m_item[des%10].i[index];
    float point1 = Ground::addbyix(ground, 2, ground->m_group[src/10].m_item[src%10].i[1]);
    ix *= point1 / 100;
    Ground::addin(ground, des, index, ix);

    l0 = Ground::addbyix(ground, 2, ground->m_group[src/10].m_item[src%10].i[0]);
    l0 = Ground::addln(ground, des, 0, -l0);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff205011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, index, -ix, true);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
