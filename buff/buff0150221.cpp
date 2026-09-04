#include "buff0150221.h"
#include "ground.h"
#include "log/logger.h"

void Buff01502211::run(Ground *ground, int m)
{
    if (ground->m_group[des/10].m_item[des%10].methods[0] != m)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01502212(src, src, id));
    Ground::addBuff(ground, ground->buff[4][src], buff);
}

void Buff01502212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01502213(src, src, id, 1));
        Ground::addBuff(ground, ground->buff[6][src], buff);
        count = 0;
    }
}

void Buff01502212::run(Ground *ground)
{
    float point1 = Ground::pointbystar(ground, 50, des, method);
    float point2 = point1 + check01502213(ground, src) * 7;
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return;
    }

    float point3 = Ground::pointbystar(ground, 160, des, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0xa011);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, point3);
    }
}

int Buff01502212::check01502213(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 1502213)
        {
            QSharedPointer<Buff01502213> buff = qSharedPointerCast<Buff01502213>(pbuff);
            return buff->num();
        }
    }
    return 0;
}

void Buff01502213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 3, des, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    float point3 = Ground::addln(ground, des, 0, -point2);
    if (count < 6)
    {
        ++count;
        l0 += point3;
        ground->m_group[des/10].m_item[des%10].l[0] += point3;
    }
}

void Buff01502213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff01502213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 3, des, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    float point3 = Ground::addln(ground, des, 0, -point2);
    if (count < 6)
    {
        ++count;
        l0 += point3;
        ground->m_group[des/10].m_item[des%10].l[0] += point3;
    }
    if (count >= 6)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01502214(src, des, id, 1));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    }
}

void Buff01502214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 10, des, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    k2 = Ground::addkn(ground, des, 2, point2);
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff01502214::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}
