#include "buff001700.h"
#include "ground.h"
#include "log/logger.h"

void Buff001700::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001701(src, des, 1700));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001701::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 5)
    {
        float l = Ground::addln(ground, des, 0, -1.8);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff001701::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff001701::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 5)
    {
        float l = Ground::addln(ground, des, 0, -1.8);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}
