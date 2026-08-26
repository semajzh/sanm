#include "buff007.h"
#include "buff302012.h"
#include "ground.h"
#include "log/logger.h"

void Buff007::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count > 5)
    {
        count = 5;
    }
    Ground::exenter(ground, src, des, id);
    check302012(ground);
}

void Buff007::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
    Ground::exexit(ground, src, des, id);
}

void Buff007::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count > 5)
    {
        count = 5;
    }
    Ground::exupdate(ground, src, des, id);
    check302012(ground);
}

void Buff007::run(Ground* ground)
{
    Item& item1 = ground->m_group[src/10].m_item[src%10];
    Item& item2 = ground->m_group[des/10].m_item[des%10];
    Ground::actml(ground, &item1, &item2, id, 60*count);
}

int Buff007::run(Ground* , int)
{
    return count;
}

bool Buff007::check302012(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][src])
    {
        if (pbuff->id == 302012)
        {
            QSharedPointer<Buff302012> buff = qSharedPointerCast<Buff302012>(pbuff);
            buff->run(ground, des);
            return true;
        }
    }
    return false;
}
