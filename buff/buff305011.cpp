#include "buff305011.h"
#include "ground.h"
#include "log/logger.h"

void Buff305011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -6);
    i3 = ground->m_group[des/10].m_item[des%10].i[3] * 0.1f;
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    ground->m_group[des/10].m_item[des%10].i[3] += i3;
}

void Buff305011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    ground->m_group[des/10].m_item[des%10].i[3] -= i3;
}
