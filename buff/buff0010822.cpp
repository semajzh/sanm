#include "buff0010822.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff0010822::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count > 2)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 25, src, method);
    float ix = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1], 360); //
    for (int n = 0; n < 4; ++n)
    {
        float ii = Ground::addin(ground, des, n, -ix);
        i[n] += ii;
        ground->m_group[des/10].m_item[des%10].i[n] += ii;
    }
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff0010822::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        ground->m_group[des/10].m_item[des%10].i[n] -= i[n];
    }
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff0010822::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count > 2)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 25, src, method);
    float ix = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1], 360); //
    for (int n = 0; n < 4; ++n)
    {
        float ii = Ground::addin(ground, des, n, -ix);
        i[n] += ii;
        ground->m_group[des/10].m_item[des%10].i[n] += ii;
    }
    Ground::exupdate(ground, src, des, id);
}
