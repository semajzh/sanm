#include "buff3150121.h"
#include "buff315011.h"
#include "ground.h"
#include "log/logger.h"

int Buff31501211::run(Ground* ground, float& point)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return des;
    }
    int obj = meta;
    if (obj/10 != des/10 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return des;
    }
    if (!check31501212(ground, obj))
    {
        return des;
    }
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    point *= 1 - point2 / 100;
    return obj;
}

bool Buff31501211::check31501212(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 31501212)
        {
            return true;
        }
    }
    return false;
}

void Buff31501212::run(Ground* ground, int m)
{
    if (ground->m_group[des/10].m_item[des%10].methods[0] != m)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 25, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return;
    }
    if (round != ground->m_round)
    {
        count = 0;
        round = ground->m_round;
    }
    if (++count > 2)
    {
        return;
    }

    int obj = meta;
    if (obj/10 != des/10 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return;
    }
    if (!check31501211(ground, obj))
    {
        return;
    }
    int n = 2 + qrand() % 2;
    QVector<int> objs = Ground::selectObjN(ground, obj, 0x0020+n);
    for (int obj2 : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31501213(obj, obj2, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
        check315011(ground, obj, des);
    }

    float point3 = Ground::pointbystar(ground, 52, src, method);
    float point4 = Ground::pointbystar(ground, 7, src, method);
    objs = Ground::selectObjN(ground, obj, 0x0023);
    for (int obj2 : objs)
    {
        int c = check31501213(ground, obj2);
        if (c > 0)
        {
            Ground::actml(ground, &ground->m_group[obj/10].m_item[obj%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point3+c*point4, 0, 0, 40);
        }
    }
}

bool Buff31501212::check31501211(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 31501211)
        {
            return true;
        }
    }
    return false;
}

int Buff31501212::check31501213(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 31501213)
        {
            QSharedPointer<Buff31501213> buff = qSharedPointerCast<Buff31501213>(pbuff);
            return buff->num();
        }
    }
    return 0;
}


bool Buff31501212::check315011(Ground* ground, int obj, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj])
    {
        if (pbuff->id == 315011)
        {
            QSharedPointer<Buff315011> buff = qSharedPointerCast<Buff315011>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

void Buff31501213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 9)
    {
        float k = -4;
        k6 += k;
        k7 += k;
        ground->m_group[des/10].m_item[des%10].k[6] += k;
        ground->m_group[des/10].m_item[des%10].k[7] += k;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff31501213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[6] -= k6;
    ground->m_group[des/10].m_item[des%10].k[7] -= k7;
    Ground::exexit(ground, src, des, id);
}

void Buff31501213::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 9)
    {
        float k = -4;
        k6 += k;
        k7 += k;
        ground->m_group[des/10].m_item[des%10].k[6] += k;
        ground->m_group[des/10].m_item[des%10].k[7] += k;
    }
    Ground::exupdate(ground, src, des, id);
}
