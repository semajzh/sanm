#include "buff4090121.h"
#include "ground.h"
#include "log/logger.h"

void Buff4090121::run(Ground* ground, int point)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40901212(src, src, method, point));
    Ground::addBuff(ground, ground->buff[0][src], buff);
}

void Buff40901212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    actpoint += meta;
    if (actpoint < 5000)
    {
        return;
    }
    actpoint -= 5000;

    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::pointbystar(ground, 100, src, method);
    QVector<int> objs = selectObj(ground);
    int jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]/5); //
    for (int obj : objs)
    {
        if (qrand() % 100 + 1 <= 100 - jl)
        {
            continue;
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40901213(des, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff);

        QVector<int> objs1 = Ground::selectObjN(ground, obj, 0x22);
        for (int obj1 : objs1)
        {
            float p = Ground::addbyix(ground, point2, ground->m_group[obj1/10].m_item[obj1%10].i[2]/5); //
            Ground::actbr(ground, &ground->m_group[obj/10].m_item[obj%10], &ground->m_group[obj1/10].m_item[obj1%10], method, p);
        }
    }
}

void Buff40901212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);

    actpoint += buff->meta;
    if (actpoint < 5000)
    {
        return;
    }
    actpoint -= 5000;

    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::pointbystar(ground, 100, src, method);
    QVector<int> objs = selectObj(ground);
    int jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]/5); //
    for (int obj : objs)
    {
        if (qrand() % 100 + 1 <= 100 - jl)
        {
            continue;
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40901213(des, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff);

        QVector<int> objs1 = Ground::selectObjN(ground, obj, 0x22);
        for (int obj1 : objs1)
        {
            float p = Ground::addbyix(ground, point2, ground->m_group[obj1/10].m_item[obj1%10].i[2]/5); //
            Ground::actbr(ground, &ground->m_group[obj/10].m_item[obj%10], &ground->m_group[obj1/10].m_item[obj1%10], method, p);
        }
    }
}

QVector<int> Buff40901212::selectObj(Ground* ground)
{
    QVector<int> objs;
    int g = des / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].g[4] != 1)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    return objs;
}

void Buff40901213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 5)
    {
        float point1 = Ground::pointbystar(ground, 4, src, method);
        float k = Ground::addkn(ground, des, 0, point1);
        float l = Ground::addln(ground, des, 0, -point1);
        k0 += k;
        l0 += l;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff40901213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff40901213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 5)
    {
        float point1 = Ground::pointbystar(ground, 4, src, method);
        float k = Ground::addkn(ground, des, 0, point1);
        float l = Ground::addln(ground, des, 0, -point1);
        k0 += k;
        l0 += l;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}
