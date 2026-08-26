#include "buff401061.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010612::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i1 = Ground::addin(ground, des, 1, -30);
    ground->m_group[des/10].m_item[des%10].i[1] += i1;
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff4010612::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff4010612::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
