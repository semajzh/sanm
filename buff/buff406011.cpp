#include "buff406011.h"
#include "ground.h"
#include "log/logger.h"

void Buff406011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = Ground::addkn(ground, des, 0, 5);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    i3 = ground->m_group[des/10].m_item[des%10].i[3] * 0.05;
    ground->m_group[des/10].m_item[des%10].i[3] += i3;
}

void Buff406011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].i[3] -= i3;
}
