#include "buff318021.h"
#include "ground.h"
#include "log/logger.h"

void Buff318021::run(Ground* ground, int n)
{
    QSharedPointer<Buff> buff(new Buff3180211(src, src, method, 1, n));
    Ground::addBuff(ground, ground->buff[1][src], buff);
}

void Buff3180211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        j += 3;
        ground->m_group[des/10].m_item[des%10].j[meta] += 3;
    }
}

void Buff3180211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[meta] -= j;
}

void Buff3180211::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 4)
    {
        j += 3;
        ground->m_group[des/10].m_item[des%10].j[meta] += 3;
    }
}
