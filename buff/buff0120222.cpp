#include "buff0120222.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff01202221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    i1 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    i1 = Ground::addin(ground, des, 1, -i1);
    ground->m_group[des/10].m_item[des%10].i[1] += i1;
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff01202221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff01202221::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

void Buff01202223::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    i0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    i0 = Ground::addin(ground, des, 0, -i0);
    ground->m_group[des/10].m_item[des%10].i[0] += i0;
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff01202223::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff01202223::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
