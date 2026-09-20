#include "buff1170121.h"
#include "buff016.h"
#include "buff117011.h"
#include "buff117012.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff1170121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Item& item1 = ground->m_group[src/10].m_item[src%10];
    Item& item2 = ground->m_group[des/10].m_item[des%10];

    float point1 = Ground::pointbystar(ground, 12, src, method);
    float point2 = Ground::addbyix(ground, point1, item1.i[2]);
    i0 = item1.i[0] * point2 / 100;
    i1 = item1.i[1] * point2 / 100;
    item2.i[0] += i0;
    item2.i[1] += i1;

    float point3 = Ground::pointbystar(ground, 10, src, method);
    float point4 = Ground::addbyix(ground, point3, item1.i[2]);
    l13 = Ground::addln(ground, des, 13, -point4);
    item2.l[13] += l13;
}

void Buff1170121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    ground->m_group[des/10].m_item[des%10].l[13] -= l13;
}

float Buff1170121::run(Ground* ground, int type)
{
    float point = 0.0f;
    if (type == 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff11701212(src, des, method));
        Ground::addBuff(ground, ground->buff[3][des], buff);
    }
    else if (type == 1 && check11701212(ground, des, point))
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff11701213(src, des, method));
        Ground::addBuff(ground, ground->buff[3][des], buff);

        check117012(ground, src);
    }
    return point;
}

bool Buff1170121::check11701212(Ground* ground, int obj, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 11701212)
        {
            QSharedPointer<Buff11701212> buff = qSharedPointerCast<Buff11701212>(pbuff);
            return buff->run(point);
        }
    }
    return false;
}

bool Buff1170121::check117012(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[4][obj])
    {
        if (pbuff->id == 1170122)
        {
            QSharedPointer<Buff117012> buff = qSharedPointerCast<Buff117012>(pbuff);
            buff->run(ground, obj);
            return true;
        }
    }
    return false;
}

void Buff1170121::run(Ground* ground)
{
    if (ground->m_round < 2)
    {
        return;
    }
    act(ground, 0x2021);
    act(ground, 0x4021);
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 11701213)
        {
            pbuff->exit(ground);
            return;
        }
    }
}

void Buff1170121::act(Ground* ground, int criteria)
{
    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::pointbystar(ground, 60, src, method);

    QVector<int> objs = (qrand() % 100 + 1 > 100 - point2)
            ? Ground::selectObjN(ground, des, criteria)
            : Ground::selectObjN(ground, des, 0x0041);

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        float d0 = (item1.i[0] - item2.i[0] > 0) ? (item1.i[0] - item2.i[0]) : 0;
        float d1 = (item1.i[1] - item2.i[1] > 0) ? (item1.i[1] - item2.i[1]) : 0;
        Ground::actbr(ground, &item1, &item2, method, Ground::addbyix(ground, point1, d0));
        Ground::actml(ground, &item1, &item2, method, Ground::addbyix(ground, point1, d1));
    }
}

void Buff11701212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (k2.size() < 3)
    {
        float point1 = Ground::pointbystar(ground, 6, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
        float point3 = Ground::addkn(ground, des, 2, point2);
        k2.push_back(point3);
    }
}

void Buff11701212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    k2.clear();
}

void Buff11701212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (k2.size() < 3)
    {
        float point1 = Ground::pointbystar(ground, 6, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
        float point3 = Ground::addkn(ground, des, 2, point2);
        k2.push_back(point3);
    }
}

bool Buff11701212::run(float& point)
{
    if (k2.isEmpty())
    {
        return false;
    }
    point = k2.takeLast();
    return true;
}

void Buff11701213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (j13.size() >= 5)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 10, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    float point3 = Ground::addjn(ground, des, 13, point2);
    float point4 = Ground::addjn(ground, des, 14, point2);
    j13.push_back(point3);
    j14.push_back(point4);
    ground->m_group[des/10].m_item[des%10].j[13] += point3;
    ground->m_group[des/10].m_item[des%10].j[14] += point4;
}

void Buff11701213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    while (!j13.isEmpty())
    {
        ground->m_group[des/10].m_item[des%10].j[13] -= j13.takeLast();
        ground->m_group[des/10].m_item[des%10].j[14] -= j14.takeLast();
    }
}

void Buff11701213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (j13.size() >= 5)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 10, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    float point3 = Ground::addjn(ground, des, 13, point2);
    float point4 = Ground::addjn(ground, des, 14, point2);
    j13.push_back(point3);
    j14.push_back(point4);
    ground->m_group[des/10].m_item[des%10].j[13] += point3;
    ground->m_group[des/10].m_item[des%10].j[14] += point4;
}
