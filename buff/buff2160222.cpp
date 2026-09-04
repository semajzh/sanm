#include "buff2160222.h"
#include "buff216021.h"
#include "ground.h"
#include "log/logger.h"

void Buff21602221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j7 = Ground::pointbystar(ground, 50, src, method);
    ground->m_group[des/10].m_item[des%10].j[7] += j7;
}

void Buff21602221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
}

void Buff21602222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        k5 += point1;
        ground->m_group[des/10].m_item[des%10].k[5] += point1;
    }
}

void Buff21602222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
}

void Buff21602222::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        k5 += point1;
        ground->m_group[des/10].m_item[des%10].k[5] += point1;
    }
    check216021(ground, count);
}

bool Buff21602222::check216021(Ground* ground, int count)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][src])
    {
        if (pbuff->id == 216021)
        {
            QSharedPointer<Buff216021> buff = qSharedPointerCast<Buff216021>(pbuff);
            buff->run(ground, count);
            return true;
        }
    }
    return false;
}

void Buff21602223::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        float j = Ground::addjn(ground, des, 11, point1);
        j11 += j;
        ground->m_group[des/10].m_item[des%10].j[11] += j;
    }
}

void Buff21602223::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] -= j11;
}

void Buff21602223::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        float j = Ground::addjn(ground, des, 11, point1);
        j11 += j;
        ground->m_group[des/10].m_item[des%10].j[11] += j;
    }
    check216021(ground, count);
}

bool Buff21602223::check216021(Ground* ground, int count)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][src])
    {
        if (pbuff->id == 216021)
        {
            QSharedPointer<Buff216021> buff = qSharedPointerCast<Buff216021>(pbuff);
            buff->run(ground, count);
            return true;
        }
    }
    return false;
}

void Buff21602224::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        float j = Ground::addjn(ground, des, 6, point1);
        j6 += j;
        ground->m_group[des/10].m_item[des%10].j[6] += j;
    }
}

void Buff21602224::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
}

void Buff21602224::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 10, src, method);
        float j = Ground::addjn(ground, des, 6, point1);
        j6 += j;
        ground->m_group[des/10].m_item[des%10].j[6] += j;
    }
    check216021(ground, count);
}

bool Buff21602224::check216021(Ground* ground, int count)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][src])
    {
        if (pbuff->id == 216021)
        {
            QSharedPointer<Buff216021> buff = qSharedPointerCast<Buff216021>(pbuff);
            buff->run(ground, count);
            return true;
        }
    }
    return false;
}
