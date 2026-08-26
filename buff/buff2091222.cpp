#include "buff2091222.h"
#include "ground.h"
#include "log/logger.h"

void Buff2091222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 3)
    {
        j0 += 15;
        ground->m_group[des/10].m_item[des%10].j[0] += 15;
    }
}

void Buff2091222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
}

void Buff2091222::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 3)
    {
        j0 += 15;
        ground->m_group[des/10].m_item[des%10].j[0] += 15;
    }
}

void Buff20912222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
}

void Buff20912222::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    ++count;
}

int Buff20912222::run(Ground* , int max)
{
    return (count > max ? max : count);
}
