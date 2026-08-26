#include "buff1010320.h"
#include "ground.h"
#include "log/logger.h"

void Buff1010320::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j8 = Ground::pointbystar(ground, 60, src, method);
    ground->m_group[des/10].m_item[des%10].j[8] += j8;
}

void Buff1010320::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] -= j8;
}

void Buff1010320::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10103202(src, des, 1010320, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff10103202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    if (++count <= 5)
    {
        float point1 = Ground::pointbystar(ground, 20, src, method);
        float k = point1;//Ground::addkn(ground, des, 8, point1);
        k8 += k;
        ground->m_group[des/10].m_item[des%10].k[8] += k;
        i2 += point1;
        ground->m_group[des/10].m_item[des%10].i[2] += point1;
    }
}

void Buff10103202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[8] -= k8;
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
}

void Buff10103202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);

    if (++count <= 5)
    {
        float point1 = Ground::pointbystar(ground, 20, src, method);
        float k = point1;//Ground::addkn(ground, des, 8, point1);
        k8 += k;
        ground->m_group[des/10].m_item[des%10].k[8] += k;
        i2 += point1;
        ground->m_group[des/10].m_item[des%10].i[2] += point1;
    }
}
