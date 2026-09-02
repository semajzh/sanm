#include "buff0014420.h"
#include "buff015.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014420::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 24, src, method);
    j2 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 20; //
    ground->m_group[des/10].m_item[des%10].j[2] += j2;
}

void Buff0014420::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
}

void Buff0014420::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00144202(des, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff00144202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        i1 += point1;
        ground->m_group[des/10].m_item[des%10].i[1] += point1;
    }
}

void Buff00144202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
}

void Buff00144202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        i1 += point1;
        ground->m_group[des/10].m_item[des%10].i[1] += point1;
    }
}
