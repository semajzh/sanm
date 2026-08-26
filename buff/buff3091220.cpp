#include "buff3091220.h"
#include "ground.h"
#include "log/logger.h"

void Buff3091220::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k3 = Ground::addkn(ground, des, 3, 120);
    ground->m_group[des/10].m_item[des%10].k[3] += k3;
}

void Buff3091220::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[3] -= k3;
}

void Buff3091220::run(Ground* ground, int obj)
{
    float ex = ground->m_group[des/10].m_item[des%10].i[0] / 20;
    if (qrand() % 100 + 1 <= 100 - 30 - ex)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30912202(des, obj, 3091220, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
    Ground::run3332(ground, des, obj, true);
}

void Buff30912202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 3)
    {
        k0 += 8;
        ground->m_group[des/10].m_item[des%10].k[0] -= 8;
    }
}

void Buff30912202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff30912202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 3)
    {
        k0 += 8;
        ground->m_group[des/10].m_item[des%10].k[0] -= 8;
    }
}
