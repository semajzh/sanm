#include "buff001610.h"
#include "ground.h"
#include "log/logger.h"

void Buff001610::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001611(src, des, 1610));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001611::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        i0 += 5;
        ground->m_group[des/10].m_item[des%10].i[0] += 5;
    }
}

void Buff001611::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
}

void Buff001611::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        i0 += 5;
        ground->m_group[des/10].m_item[des%10].i[0] += 5;
    }
}



