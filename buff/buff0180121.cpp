#include "buff0180121.h"
#include "ground.h"
#include "log/logger.h"

void Buff01801211::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, src, 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff01801213(src, obj, method, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
}

void Buff01801212::run(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][des])
    {
        if (pbuff->id == 1801213)
        {
            int count = qSharedPointerCast<Buff01801213>(pbuff)->size();
            for (int i = 0; i < count; ++i)
            {
                QSharedPointer<Buff> buff(new Buff01801214(src, des, method));
                Ground::addBuff(ground, ground->buff[0][des], buff);
            }
            return;
        }
    }
}

void Buff01801213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 10)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        point2 = Ground::addln(ground, des, 0, -point2);
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
}

void Buff01801213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff01801213::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 10)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        point2 = Ground::addln(ground, des, 0, -point2);
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
}

void Buff01801214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 10)
    {
        float point1 = Ground::pointbystar(ground, 2, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        j7 += point2;
        ground->m_group[des/10].m_item[des%10].j[7] += point2;
    }
}

void Buff01801214::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
}

void Buff01801214::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 10)
    {
        float point1 = Ground::pointbystar(ground, 2, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        j7 += point2;
        ground->m_group[des/10].m_item[des%10].j[7] += point2;
    }
}
