#include "buff0030120.h"
#include "ground.h"
#include "log/logger.h"

void Buff0030120::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 50, src, method);
    j8 = point1 + ground->m_group[src/10].m_item[src%10].i[0] / 20; //
    ground->m_group[des/10].m_item[des%10].j[8] += j8;
}

void Buff0030120::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] -= j8;
}

void Buff0030120::run(Ground* ground, int)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00301202(src, des, id, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff00301202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 6)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float l = Ground::addln(ground, des, 1, -point1);
        l1 += l;
        ground->m_group[des/10].m_item[des%10].l[1] += l;
    }
}

void Buff00301202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}

void Buff00301202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 6)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float l = Ground::addln(ground, des, 1, -point1);
        l1 += l;
        ground->m_group[des/10].m_item[des%10].l[1] += l;
    }
}
