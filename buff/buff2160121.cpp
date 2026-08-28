#include "buff2160121.h"
#include "ground.h"
#include "log/logger.h"

void Buff21601211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    l9 = Ground::addln(ground, des, 9, -point2);
    l11 = Ground::addln(ground, des, 11, -point2);
    ground->m_group[des/10].m_item[des%10].l[9] += l9;
    ground->m_group[des/10].m_item[des%10].l[11] += l11;
}

void Buff21601211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[9] -= l9;
    ground->m_group[des/10].m_item[des%10].l[11] -= l11;
}

bool Buff21601211::run(Ground* ground, int& obj)
{
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (qrand() % 100 + 1 > 100 - jl)
    {
        obj = meta;
        return true;
    }
    return false;
}

void Buff21601212::run(Ground* ground)
{
    float jl = Ground::addbyix(ground, 50, meta, 10000);
    int count = (qrand() % 100 + 1 <= 100 - jl) ? 1 : 2;
    for (int i = 0; i < count; ++i)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21601213(src, des, id));
        Ground::addBuff(ground, ground->buff[4][des], buff);
    }
}

void Buff21601213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
    float point1 = Ground::addbyix(ground, 10, ground->m_group[src/10].m_item[src%10].i[2]);
    float point2 = Ground::addln(ground, des, 0, -point1);
    float point3 = Ground::addbyix(ground, 3, ground->m_group[src/10].m_item[src%10].i[2]);
    float point4 = Ground::addjn(ground, des, 13, point3);
    float point5 = Ground::addjn(ground, des, 14, point3);
    l0.push_back(point2);
    j13.push_back(point4);
    j14.push_back(point5);
    ground->m_group[des/10].m_item[des%10].l[0] += point2;
    ground->m_group[des/10].m_item[des%10].j[13] += point4;
    ground->m_group[des/10].m_item[des%10].j[14] += point5;
}

void Buff21601213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (float l : l0)
    {
        ground->m_group[des/10].m_item[des%10].l[0] -= l;
    }
    for (float j : j13)
    {
        ground->m_group[des/10].m_item[des%10].j[13] -= j;
    }
    for (float j : j14)
    {
        ground->m_group[des/10].m_item[des%10].j[14] -= j;
    }
}

void Buff21601213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    ++count;
    float point1 = Ground::addbyix(ground, 10, ground->m_group[src/10].m_item[src%10].i[2]);
    float point2 = Ground::addln(ground, des, 0, -point1);
    float point3 = Ground::addbyix(ground, 3, ground->m_group[src/10].m_item[src%10].i[2]);
    float point4 = Ground::addjn(ground, des, 13, point3);
    float point5 = Ground::addjn(ground, des, 14, point3);
    l0.push_back(point2);
    j13.push_back(point4);
    j14.push_back(point5);
    ground->m_group[des/10].m_item[des%10].l[0] += point2;
    ground->m_group[des/10].m_item[des%10].j[13] += point4;
    ground->m_group[des/10].m_item[des%10].j[14] += point5;
}

void Buff21601213::run(Ground* ground)
{
    if (count <= 0)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 100, src, method);
    float point = point1 * count;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021, des);
    for (int obj : objs)
    {
        if (ground->m_group[des/10].m_item[des%10].i[0] >= ground->m_group[des/10].m_item[des%10].i[1])
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
        else
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
    }
}

void Buff21601213::run(Ground* ground, int )
{
    if (count <= 0)
    {
        return;
    }
    count -= 1;

    if (!l0.isEmpty())
    {
        ground->m_group[des/10].m_item[des%10].l[0] -= l0.takeLast();
    }
    if (!j13.isEmpty())
    {
        ground->m_group[des/10].m_item[des%10].j[13] -= j13.takeLast();
    }
    if (!j14.isEmpty())
    {
        ground->m_group[des/10].m_item[des%10].j[14] -= j14.takeLast();
    }
}


