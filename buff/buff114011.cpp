#include "buff114011.h"
#include "ground.h"
#include "log/logger.h"

void Buff114011::run(Ground* ground, int obj)
{
    float point1 = Ground::addbyix(ground, 5, ground->m_group[des/10].m_item[des%10].i[2]);
    float point2 = point1 * 1000;

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1140112(des, obj, id, 2, point2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff1140113(des, des, id, 2, point2));
    Ground::addBuff(ground, ground->buff[1][des], buff1);
}

void Buff1140112::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (count++ < 3)
    {
        l2 += meta/1000.0f;
        ground->m_group[des/10].m_item[des%10].l[2] += meta/1000.0f;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff1140112::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
    Ground::exexit(ground, src, des, id);
}

void Buff1140112::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (count++ < 3)
    {
        l2 += meta/1000.0f;
        ground->m_group[des/10].m_item[des%10].l[2] += meta/1000.0f;
    }
    Ground::exupdate(ground, src, des, id);
}

void Buff1140113::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (count++ < 3)
    {
        float l = Ground::addln(ground, des, 2, -meta/1000.0f);
        l2 += l;
        ground->m_group[des/10].m_item[des%10].l[2] += l;
    }
}

void Buff1140113::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
}

void Buff1140113::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (count++ < 3)
    {
        float l = Ground::addln(ground, des, 2, -meta/1000.0f);
        l2 += l;
        ground->m_group[des/10].m_item[des%10].l[2] += l;
    }
}
