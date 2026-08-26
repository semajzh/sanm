#include "buff3090124.h"
#include "ground.h"
#include "log/logger.h"

void Buff3090124::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 7, src, method);
        float k = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].j[7]*5); //
        k = Ground::addkn(ground, des, 0, k);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff3090124::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff3090124::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);

    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 7, src, method);
        float k = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].j[7]*5); //
        k = Ground::addkn(ground, des, 0, k);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}
