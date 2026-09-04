#include "buff201012.h"
#include "ground.h"
#include "log/logger.h"

void Buff201012::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010122(src, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff2010122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::addkn(ground, des, 0, 4);
        k0 += point1;
        ground->m_group[des/10].m_item[des%10].k[0] += point1;
    }
}

void Buff2010122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff2010122::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 4)
    {
        float point1 = Ground::addkn(ground, des, 0, 4);
        k0 += point1;
        ground->m_group[des/10].m_item[des%10].k[0] += point1;
    }
}
