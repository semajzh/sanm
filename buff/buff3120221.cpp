#include "buff3120221.h"
#include "ground.h"
#include "log/logger.h"

void Buff3120221::run(Ground* ground, int m)
{
    if (ground->m_group[des/10].m_item[des%10].methods[0] != m)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31202212(src, des, method));
    Ground::addBuff(ground, ground->buff[4][des], buff);

    if (check312021(ground, src))
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31202212(src, src, method));
        Ground::addBuff(ground, ground->buff[4][src], buff);
    }
}

bool Buff3120221::check312021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 312021)
        {
            return true;
        }
    }
    return false;
}

void Buff31202212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 4, src, method);
    float point2 = Ground::pointbystar(ground, 15, src, method);
    float l = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l = Ground::addln(ground, des, 0, -l);
    if (++count <= 5)
    {
        l0 += l;
        j1 += point2;
        j3 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
        ground->m_group[des/10].m_item[des%10].j[1] += point2;
        ground->m_group[des/10].m_item[des%10].j[3] += point2;
    }
}

void Buff31202212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    ground->m_group[des/10].m_item[des%10].j[1] -= j1;
    ground->m_group[des/10].m_item[des%10].j[3] -= j3;
}

void Buff31202212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 4, src, method);
    float point2 = Ground::pointbystar(ground, 15, src, method);
    float l = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l = Ground::addln(ground, des, 0, -l);
    if (++count <= 5)
    {
        l0 += l;
        j1 += point2;
        j3 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
        ground->m_group[des/10].m_item[des%10].j[1] += point2;
        ground->m_group[des/10].m_item[des%10].j[3] += point2;
    }
}

void Buff31202212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 20, src, method);
    float point2 = Ground::pointbystar(ground, 20, src, method);
    float point3 = Ground::pointbystar(ground, 10, src, method);
    float point = point1 + count * point2;
    float j0 = count * point3;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        if (ground->m_group[des/10].m_item[des%10].i[0] > ground->m_group[des/10].m_item[des%10].i[1])
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point, false, j0);
        }
        else
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point, false, j0);
        }
    }

    QVector<QSharedPointer<Buff>>& buffs = ground->buff[4][des];
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs.at(i)->id == 31202212)
        {
            buffs.at(i)->exit(ground);
            buffs.remove(i);
            break;
        }
    }
}
