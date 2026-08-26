#include "buff4010920.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010920::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40109202(des, obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    if (ground->m_round < 4)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 140, src, method);
    float point = point1 + (check401091(ground, des) ? 20 : 0);

    objs = Ground::selectObjN(ground, des, 0x12);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
    }
}

void Buff4010920::run(Ground* ground, int )
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        check40109202(ground, obj);
    }
}

bool Buff4010920::check401091(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401091)
        {
            return true;
        }
    }
    return false;
}

bool Buff4010920::check40109202(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 40109202)
        {
            QSharedPointer<Buff40109202> buff = qSharedPointerCast<Buff40109202>(pbuff);
            buff->run(ground);
            return true;
        }
    }
    return false;
}

void Buff40109202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 16, src, method);
    float point = check401091(ground, src) ? Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]) : point1;

    l0 = Ground::addln(ground, des, 0, -point);
    l4 = Ground::addln(ground, des, 4, -point);
    l5 = Ground::addln(ground, des, 5, -point);
    l08 = l0 / 8;
    l48 = l4 / 8;
    l58 = l5 / 8;
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    ground->m_group[des/10].m_item[des%10].l[4] += l4;
    ground->m_group[des/10].m_item[des%10].l[5] += l5;
}

void Buff40109202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    ground->m_group[des/10].m_item[des%10].l[4] -= l4;
    ground->m_group[des/10].m_item[des%10].l[5] -= l5;
}

void Buff40109202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);

    l0 += l08 * count;
    l4 += l48 * count;
    l5 += l58 * count;
    ground->m_group[des/10].m_item[des%10].l[0] += l08 * count;
    ground->m_group[des/10].m_item[des%10].l[4] += l48 * count;
    ground->m_group[des/10].m_item[des%10].l[5] += l58 * count;
    count = 0;
}

void Buff40109202::run(Ground* ground)
{
    if (count >= 8)
    {
        return;
    }
    l0 -= l08;
    l4 -= l48;
    l5 -= l58;
    ground->m_group[des/10].m_item[des%10].l[0] -= l08;
    ground->m_group[des/10].m_item[des%10].l[4] -= l48;
    ground->m_group[des/10].m_item[des%10].l[5] -= l58;
    ++count;
}

bool Buff40109202::check401091(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401091)
        {
            return true;
        }
    }
    return false;
}

