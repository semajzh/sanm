#include "buff0103022.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff0103022::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float i = Ground::addbyix(ground, 20, ground->m_group[src/10].m_item[src%10].i[3]);
        i = Ground::addin(ground, des, 1, -i);
        i1 += i;
        ground->m_group[des/10].m_item[des%10].i[1] += i;
    }
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff0103022::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff0103022::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        float i = Ground::addbyix(ground, 20, ground->m_group[src/10].m_item[src%10].i[3]);
        i = Ground::addin(ground, des, 1, -i);
        i1 += i;
        ground->m_group[des/10].m_item[des%10].i[1] += i;
    }
    Ground::exupdate(ground, src, des, id);
}
