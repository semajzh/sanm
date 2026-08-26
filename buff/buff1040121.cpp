#include "buff1040121.h"
#include "ground.h"
#include "log/logger.h"

void Buff1040121::run(Ground* ground)
{
    if (ground->m_round < 2)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 140, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

void Buff1040121::run(Ground* ground, int )
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff10401212>(new Buff10401212(src, des, method));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff10401212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 6)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float k = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff10401212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff10401212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 6)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float k = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}
