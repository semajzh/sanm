#include "buff0100320.h"
#include "ground.h"
#include "log/logger.h"

void Buff0100320::run(Ground* ground, int m)
{
    if (ground->m_group[des/10].m_item[des%10].methods[0] != m)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 30, src, method);
    float jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1], 955);
    if (qrand() % 100 + 1 < 100 - jl)
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 4)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01003202(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[6][des], buff);

    float point2 = Ground::pointbystar(ground, 30, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
    }
}

void Buff01003202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 5, src, method);
    float k = Ground::addkn(ground, des, 2, point1);
    k2 += k;
    ground->m_group[des/10].m_item[des%10].k[2] += k;
}

void Buff01003202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff01003202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 5, src, method);
    float k = Ground::addkn(ground, des, 2, point1);
    k2 += k;
    ground->m_group[des/10].m_item[des%10].k[2] += k;
}
