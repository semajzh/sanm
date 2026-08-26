#include "buff006.h"
#include "ground.h"
#include "log/logger.h"

void Buff006::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
    Ground::exenter(ground, src, des, id);
}

void Buff006::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
    Ground::exexit(ground, src, des, id);
}

void Buff006::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    ++count;
    Ground::exupdate(ground, src, des, id);
}

void Buff006::run(Ground* ground)
{
    float point = 60 * (count > 5 ? 5 : count);
    Ground::actml(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[des/10].m_item[des%10], id, point);
}
