#include "buff3010722.h"
#include "ground.h"
#include "log/logger.h"

void Buff30107221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    float l = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l0 = Ground::addln(ground, des, 0, -l);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff30107221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff30107222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    l0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    Ground::exenter(ground, src, des, id);
}

void Buff30107222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff30107222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
