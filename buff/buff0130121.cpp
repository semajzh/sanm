#include "buff0130121.h"
#include "ground.h"
#include "log/logger.h"

void Buff01301211::run(Ground* ground, int obj, int m)
{
    if (m != ground->m_group[des/10].m_item[des%10].methods[0])
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01301213(des, obj, method));
    Ground::addBuff(ground, ground->buff[0][obj], buff);
}

void Buff01301212::run(Ground* ground)
{
    if (ground->m_round < 4)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::getDataHlo(ground, des);
    float point3 = point1 + point2 / 100;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0022);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point3);
    }
}

void Buff01301213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 6)
    {
        float point1 = Ground::pointbystar(ground, 3, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1] + ground->m_group[src/10].m_item[src%10].i[2]);
        float point3 = Ground::addln(ground, des, 0, -point2);
        l0 += point3;
        ground->m_group[des/10].m_item[des%10].l[0] += point3;
    }
}

void Buff01301213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff01301213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 6)
    {
        float point1 = Ground::pointbystar(ground, 3, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1] + ground->m_group[src/10].m_item[src%10].i[2]);
        float point3 = Ground::addln(ground, des, 0, -point2);
        l0 += point3;
        ground->m_group[des/10].m_item[des%10].l[0] += point3;
    }
}
