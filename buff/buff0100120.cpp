#include "buff0100120.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff0100120::run(Ground* ground, int obj)
{
    float point1 = Ground::pointbystar(ground, 55, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
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

    bool b002 = check002(ground, obj);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01001202(des, des, method));
    Ground::addBuff(ground, ground->buff[0][des], buff);

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff002(des, obj, method, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff2);

    if (b002)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01001203(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

bool Buff0100120::check002(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 2)
        {
            return true;
        }
    }
    return false;
}

void Buff01001202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 15)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        i0 += Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[0]); //320.33,8.01-5.3
        ground->m_group[des/10].m_item[des%10].i[0] += 5;
    }
}

void Buff01001202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
}

void Buff01001202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 15)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        i0 += Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[0]);
        ground->m_group[des/10].m_item[des%10].i[0] += 5;
    }
}

void Buff01001203::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float point1 = Ground::pointbystar(ground, 8, src, method);
        l0 += point1;
        ground->m_group[des/10].m_item[des%10].l[0] += point1;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff01001203::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff01001203::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 2)
    {
        float point1 = Ground::pointbystar(ground, 8, src, method);
        l0 += point1;
        ground->m_group[des/10].m_item[des%10].l[0] += point1;
    }
    Ground::exupdate(ground, src, des, id);
}
