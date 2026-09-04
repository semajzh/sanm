#include "buff201021.h"
#include "ground.h"
#include "log/logger.h"

void Buff201021::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010212(src, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff2010212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        j4 += 4;
        ground->m_group[des/10].m_item[des%10].j[4] += 4;
    }
}

void Buff2010212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
}

void Buff2010212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        j4 += 4;
        ground->m_group[des/10].m_item[des%10].j[4] += 4;
    }
}
