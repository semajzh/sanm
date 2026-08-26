#include "buff101131.h"
#include "ground.h"
#include "log/logger.h"

void Buff101131::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -8);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff101131::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff101131::run(Ground* ground, int obj)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1011312(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
}

void Buff1011312::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= 10;
}

void Buff1011312::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += 10;
}
