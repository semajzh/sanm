#include "buff4130122.h"
#include "ground.h"
#include "log/logger.h"

void Buff4130122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 3, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    if (++count <= 5)
    {
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff4130122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff4130122::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 3, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    if (++count <= 5)
    {
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
    Ground::exupdate(ground, src, des, id);
}

bool Buff4130122::run(Ground* , int )
{
    return (count >= 5);
}

bool Buff41301222::run(Ground* ground, int m)
{
    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    if (method22 != m || qrand() % 100 + 1 <= 100 - point2)
    {
        return false;
    }
    method22 = m;
    Logger::H().printcustom(ground, 4130122, des, 4130122, method);
    return true;
}
