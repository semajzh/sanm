#include "buff0104021.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff0104021::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 3)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01040212(src, des, method));
    Ground::addBuff(ground, ground->buff[0][des], buff);

    QVector<int> objs = Ground::selectObjN(ground, src, 0xA010);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, 80);
    }
}

void Buff0104021::run(Ground* ground, int )
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01040213(src, des, method));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff01040212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 10)
    {
        float k = Ground::addkn(ground, des, 0, 5);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff01040212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff01040212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 10)
    {
        float k = Ground::addkn(ground, des, 0, 5);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff01040213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 5, 10);
        k5 += k;
        j6 += 5;
        ground->m_group[des/10].m_item[des%10].k[5] += k;
        ground->m_group[des/10].m_item[des%10].j[6] += 5;
    }
}

void Buff01040213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
}

void Buff01040213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 5, 10);
        k5 += k;
        j6 += 5;
        ground->m_group[des/10].m_item[des%10].k[5] += k;
        ground->m_group[des/10].m_item[des%10].j[6] += 5;
    }
}
