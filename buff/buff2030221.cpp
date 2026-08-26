#include "buff2030221.h"
#include "ground.h"
#include "log/logger.h"

void Buff2030221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    j14 = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[1]);
    ground->m_group[des/10].m_item[des%10].j[14] += j14;
}

void Buff2030221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[14] -= j14;
}

void Buff2030221::run(Ground* ground)
{
    if (!check203021(ground, des) && ground->m_round % 2 == 0)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20302212(src, obj, method, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
}

bool Buff2030221::check203021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 203021)
        {
            return true;
        }
    }
    return false;
}

void Buff20302212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff20302212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff20302212::run(Ground* ground, float point)
{
    float point1 = check203021(ground, src) ? 12 : 25;
    float point2 = Ground::pointbystar(ground, point1, src, method);
    float point3 = Ground::addbyix(ground, point2, ground->m_group[src/10].m_item[src%10].i[1]);
    point = point * point3 / 100;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13, des);
    for (int obj : objs)
    {
        if (check20302212(ground, obj))
        {
            Ground::actcd(ground, &(ground->m_group[src/10].m_item[src%10]), &(ground->m_group[obj/10].m_item[obj%10]), method, point);
        }
    }
}

bool Buff20302212::check203021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 203021)
        {
            return true;
        }
    }
    return false;
}

bool Buff20302212::check20302212(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 20302212)
        {
            return true;
        }
    }
    return false;
}
