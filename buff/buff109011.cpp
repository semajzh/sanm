#include "buff109011.h"
#include "ground.h"
#include "log/logger.h"

void Buff109011::run(Ground* ground)
{
    if (ground->m_round < 3 || qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1090112(des, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1090113(des, des, method));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff1090112::enter(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    l0 += 3;
    ground->m_group[des/10].m_item[des%10].l[0] += 3;
}

void Buff1090112::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff1090112::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    l0 += 3;
    ground->m_group[des/10].m_item[des%10].l[0] += 3;
}

void Buff1090113::enter(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    float l = Ground::addln(ground, des, 0, -3);
    l0 += l;
    ground->m_group[des/10].m_item[des%10].l[0] += l;
}

void Buff1090113::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff1090113::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float l = Ground::addln(ground, des, 0, -3);
    l0 += l;
    ground->m_group[des/10].m_item[des%10].l[0] += l;
}
