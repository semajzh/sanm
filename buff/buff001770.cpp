#include "buff001770.h"
#include "ground.h"
#include "log/logger.h"

void Buff001770::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001771(src, des, 1770));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001771::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 5)
    {
        j13 += 1.5;
        ground->m_group[des/10].m_item[des%10].j[13] += 1.5;
    }
}

void Buff001771::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}

void Buff001771::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 5)
    {
        j13 += 1.5;
        ground->m_group[des/10].m_item[des%10].j[13] += 1.5;
    }
}
