#include "buff001730.h"
#include "ground.h"
#include "log/logger.h"

void Buff001730::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001731(src, des, 1730));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001731::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        j6 += 1.2;
        ground->m_group[des/10].m_item[des%10].j[6] += 1.2;
    }
}

void Buff001731::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
}

void Buff001731::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        j6 += 1.2;
        ground->m_group[des/10].m_item[des%10].j[6] += 1.2;
    }
}
