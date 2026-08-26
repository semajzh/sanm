#include "buff1140224.h"
#include "ground.h"
#include "log/logger.h"

void Buff1140224::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    k0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    Ground::exenter(ground, src, des, id);
}

void Buff1140224::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::exexit(ground, src, des, id);
}

void Buff1140224::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    Ground::exupdate(ground, src, des, id);
}
