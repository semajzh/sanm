#include "buff411011.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff4110111::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -5);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff4110111::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff4110112::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    selectMaxi(ground);
    if (maxin >= 0 && maxin <= 3)
    {
        float x = Ground::addbyix(ground, 3, ground->m_group[src/10].m_item[src%10].i[2]);
        maxi = ground->m_group[des/10].m_item[des%10].i[maxin] * x / 100;
        ground->m_group[des/10].m_item[des%10].i[maxin] -= maxi;
        Buff020::check020(ground, src, des, true);
    }
    Ground::exenter(ground, src, des, id);
}

void Buff4110112::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[maxin] += maxi;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff4110112::selectMaxi(Ground* ground)
{
    float maxi = 0;
    for (int n = 0; n < 4; ++n)
    {
        if (maxi < ground->m_group[des/10].m_item[des%10].i[n])
        {
            maxi = ground->m_group[des/10].m_item[des%10].i[n];
            maxin = n;
        }
    }
}
