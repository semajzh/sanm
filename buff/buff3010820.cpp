#include "buff3010820.h"
#include "ground.h"
#include "log/logger.h"

void Buff3010820::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k3 = Ground::pointbystar(ground, 150, src, method);
    ground->m_group[des/10].m_item[des%10].k[3] += k3;
}

void Buff3010820::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[3] -= k3;
}

void Buff3010820::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30108202(src, des, id, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff30108202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 12, src, method);
        i0 += point1;
        ground->m_group[des/10].m_item[des%10].i[0] += point1;
    }
}

void Buff30108202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
}

void Buff30108202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 12, src, method);
        i0 += point1;
        ground->m_group[des/10].m_item[des%10].i[0] += point1;
    }
}
