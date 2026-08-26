#include "buff1140121.h"
#include "buff102.h"
#include "buff114011.h"
#include "ground.h"
#include "log/logger.h"

void Buff1140121::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2], 1200);
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[3][des], buff);

    if (ground->m_group[des/10].m_item[des%10].h[0] * 2 >= ground->m_group[des/10].m_item[des%10].h[3])
    {
        return;
    }

    float point3 = Ground::pointbystar(ground, 50, src, method);
    if (qrand() % 100 + 1 > 100 - point3)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(src, des, method, 1));
        Ground::addBuff(ground, ground->buff[3][des], buff);
    }
}

void Buff1140121::run(Ground* ground, int t)
{
    if (t < 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff11401212(src, des, method, 1));
        Ground::addBuff(ground, ground->buff[6][des], buff);
    }
    else if (t > 0 && check102(ground))
    {
        float point1 = Ground::pointbystar(ground, 40, src, method);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x0023);
        for (int obj : objs)
        {
            check114011(ground, obj);
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
        }
    }
}

bool Buff1140121::check102(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 102)
        {
            QSharedPointer<Buff102> buff = qSharedPointerCast<Buff102>(pbuff);
            return (buff->count() >= 2);
        }
    }
    return false;
}

bool Buff1140121::check114011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][src])
    {
        if (pbuff->id == 114011)
        {
            QSharedPointer<Buff114011> buff = qSharedPointerCast<Buff114011>(pbuff);
            buff->run(ground, obj);
            return true;
        }
    }
    return false;
}

void Buff11401212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (++count <= 2)
    {
        float l = Ground::addln(ground, des, 0, -point2);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
        k2 += point2;
        ground->m_group[des/10].m_item[des%10].k[2] += point2;
    }
}

void Buff11401212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff11401212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (++count <= 2)
    {
        float l = Ground::addln(ground, des, 0, -point2);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
        k2 += point2;
        ground->m_group[des/10].m_item[des%10].k[2] += point2;
    }
}
