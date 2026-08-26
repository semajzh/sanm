#include "buff1100121.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff1100121::run(Ground* ground, int point)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff11001212(src, src, method, point));
    Ground::addBuff(ground, ground->buff[0][src], buff);
}

void Buff11001212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    float point1 = Ground::pointbystar(ground, 2000, src, method, -1);
    actpoint += meta;
    if (actpoint < point1)
    {
        return;
    }
    actpoint -= point1;

    run(ground);
}

void Buff11001212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);

    float point1 = Ground::pointbystar(ground, 2000, src, method, -1);
    actpoint += meta;
    if (actpoint < point1)
    {
        return;
    }
    actpoint -= point1;

    run(ground);
}

void Buff11001212::run(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    QVector<int> objs = selectObj(ground);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff11001213(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);

        check110011(ground, obj);

        if (qrand() % 100 + 1 <= 100 - 50)
        {
            continue;
        }

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff102(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff2);
    }
}

QVector<int> Buff11001212::selectObj(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    if (objs.size() > 2)
    {
        QVector<int> objs1 = Ground::selectObjN(ground, des, 0x9010);
        if (objs1.size() > 0)
        {
            objs.removeOne(objs1.front());
        }
    }
    return objs;
}

bool Buff11001212::check110011(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 110011)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

void Buff11001213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 15, src, method);
        float l = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[1]);
        l = Ground::addln(ground, des, 0, -l);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff11001213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff11001213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 15, src, method);
        float l = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[1]);
        l = Ground::addln(ground, des, 0, -l);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}
