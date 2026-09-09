#include "buff301052.h"
#include "ground.h"
#include "log/logger.h"

void Buff301052::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010522(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[6][des], buff);
}

void Buff3010522::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 3)
    {
        j6 += 10;
        k5 += 10;
        ground->m_group[des/10].m_item[des%10].j[6] += 10;
        ground->m_group[des/10].m_item[des%10].k[5] += 10;
    }
}

void Buff3010522::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
}

void Buff3010522::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 3)
    {
        j6 += 10;
        k5 += 10;
        ground->m_group[des/10].m_item[des%10].j[6] += 10;
        ground->m_group[des/10].m_item[des%10].k[5] += 10;
    }
}
