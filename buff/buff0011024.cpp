#include "buff0011024.h"
#include "ground.h"
#include "log/logger.h"

void Buff0011024::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (count < 5)
    {
        ++count;
        ground->m_group[des/10].m_item[des%10].k[5] += 8;
    }
}

void Buff0011024::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= count * 8;
    count = 0;
}

void Buff0011024::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (count < 5)
    {
        ++count;
        ground->m_group[des/10].m_item[des%10].k[5] += 8;
    }
}
