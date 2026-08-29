#include "buff3120121.h"
#include "buff016.h"
#include "ground.h"
#include "log/logger.h"

void Buff31201211::run(Ground* ground)
{
    QVector<int> objs = selectObj(ground);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31201212(src, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
}

QVector<int> Buff31201211::selectObj(Ground* ground)
{
    QVector<int> objs;
    int g = 1 - des/10;
    for (int i = 0; i < 3; ++i)
    {
        int obj = g*10+i;
        if (check31201212(ground, obj) >= 15)
        {
            continue;
        }
        objs.append(obj);
    }
    if (objs.size() >= 3)
    {
        objs.remove(qrand() % 3);
    }
    return objs;
}

int Buff31201211::check31201212(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[0][obj])
    {
        if (pbuff->id == 31201212)
        {
            QSharedPointer<Buff31201212> buff = qSharedPointerCast<Buff31201212>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return 0;
}

void Buff31201212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 2, src, method);
    float k = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    for (int n = 0; n < meta; ++n)
    {
        if (++count <= 15)
        {
            k0 += k;
            ground->m_group[des/10].m_item[des%10].k[0] -= k;
        }
    }
    Ground::exenter(ground, src, des, id);
}

void Buff31201212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::exexit(ground, src, des, id);
}

void Buff31201212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 2, src, method);
    float k = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    if (++count <= 15)
    {
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] -= k;
    }
    Ground::exupdate(ground, src, des, id);
}

int Buff31201212::run(Ground* , int )
{
    if (count > 15)
    {
        count = 15;
    }
    return count;
}

void Buff31201213::run(Ground* ground)
{
    if (ground->m_round != 3)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31201214(des, obj, method, 3));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff31201214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 2, src, method);
    l0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l0 *= check31201212(ground);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    Ground::exenter(ground, src, des, id);
}

void Buff31201214::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff31201214::run(Ground* ground, int )
{
    float point1 = Ground::pointbystar(ground, 8, src, method);
    int jl = point1 + check31201212(ground);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[6][des], buff);
}

int Buff31201214::check31201212(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[0][des])
    {
        if (pbuff->id == 31201212)
        {
            QSharedPointer<Buff31201212> buff = qSharedPointerCast<Buff31201212>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return 0;
}
