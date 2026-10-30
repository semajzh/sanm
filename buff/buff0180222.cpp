#include "buff0180222.h"
#include "ground.h"
#include "log/logger.h"

void Buff01802221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float point2 = ground->m_group[des/10].m_item[des%10].i[1] * point1 / 100;
    i1 += point2;
    Ground::addin(ground, des, 1, point2);
}

void Buff01802221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 1, -i1, true);
}

void Buff01802221::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float point2 = ground->m_group[des/10].m_item[des%10].i[1] * point1 / 100;
    i1 += point2;
    Ground::addin(ground, des, 1, point2);
}

void Buff01802222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float point1 = meta / 1000.0f;
        float point2 = Ground::addkn(ground, des, 0, point1);
        k0 += point2;
        ground->m_group[des/10].m_item[des%10].k[0] += point2;
    }
}

void Buff01802222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff01802222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        float point1 = buff->meta / 1000.0f;
        float point2 = Ground::addkn(ground, des, 0, point1);
        k0 += point2;
        ground->m_group[des/10].m_item[des%10].k[0] += point2;
    }
}

void Buff01802223::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float point1 = -meta / 1000.0f;
        k0 += point1;
        ground->m_group[des/10].m_item[des%10].k[0] += point1;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff01802223::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    Ground::exexit(ground, src, des, id);
}

void Buff01802223::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        float point1 = -buff->meta / 1000.0f;
        k0 += point1;
        ground->m_group[des/10].m_item[des%10].k[0] += point1;
    }
    Ground::exupdate(ground, src, des, id);
}
