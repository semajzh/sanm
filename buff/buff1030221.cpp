#include "buff1030221.h"
#include "ground.h"
#include "log/logger.h"

void Buff1030221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 14, src, method);
    i3 = Ground::pointbystar(ground, 30, src, method);
    ground->m_group[des/10].m_item[des%10].i[3] += i3;

    // 14 (i3)
    // 14 (355.46) => 22.66
    // 14 (364.46) => 23.55
    float point = point1 + 0.4 * ground->m_group[src/10].m_item[src%10].star/2;
    k0 = point + ground->m_group[src/10].m_item[src%10].i[3] / 48.0f;
    k0 = Ground::addkn(ground, des, 0, k0);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;

    l0 = -(point + ground->m_group[src/10].m_item[src%10].i[3] / 48.0f);
    l0 = Ground::addln(ground, des, 0, l0);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;

    if (ground->m_group[src/10].m_item[src%10].g[1] == 0)
    {
        sub = true;
        ii3 = 0.3 * i3;
        kk0 = Ground::addkn(ground, des, 0, 0.3 * k0);
        ll0 = Ground::addln(ground, des, 0, 0.3 * l0);
        ground->m_group[des/10].m_item[des%10].i[3] += ii3;
        ground->m_group[des/10].m_item[des%10].k[0] += kk0;
        ground->m_group[des/10].m_item[des%10].l[0] += ll0;
    }
}

void Buff1030221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].i[3] -= i3;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    if (sub)
    {
        sub = false;
        ground->m_group[des/10].m_item[des%10].i[3] -= ii3;
        ground->m_group[des/10].m_item[des%10].k[0] -= kk0;
        ground->m_group[des/10].m_item[des%10].l[0] -= ll0;
    }
}

void Buff1030221::run(Ground* ground)
{
    if (ground->m_round == 2 && sub)
    {
        sub = false;
        ground->m_group[des/10].m_item[des%10].i[3] -= ii3;
        ground->m_group[des/10].m_item[des%10].k[0] -= kk0;
        ground->m_group[des/10].m_item[des%10].l[0] -= ll0;
    }
}

