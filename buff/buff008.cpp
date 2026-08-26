#include "buff008.h"
#include "ground.h"
#include "log/logger.h"

void Buff008::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
    Ground::exenter(ground, src, des, id);
}

void Buff008::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
    Ground::exexit(ground, src, des, id);
}

void Buff008::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    ++count;
    Ground::exupdate(ground, src, des, id);
}

void Buff008::run(Ground* ground)
{
    if (count > 5)
    {
        count = 5;
    }
    Ground::actbr(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[des/10].m_item[des%10], id, 60 * count);

    check2100121(ground, src);
}

bool Buff008::check2100121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 21001212)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}
