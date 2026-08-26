#include "buff0017422.h"
#include "ground.h"
#include "log/logger.h"

void Buff0017422::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = -17.2;
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::exenter(ground, src, des, id);
}

void Buff0017422::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    Ground::exexit(ground, src, des, id);
}

void Buff0017422::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
