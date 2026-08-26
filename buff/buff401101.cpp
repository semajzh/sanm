#include "buff401101.h"
#include "ground.h"
#include "log/logger.h"

void Buff401101::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4011012(src, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff4011012::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
//    ground->m_group[des/10].m_item[des%10].k[4] -= 10;
//    ground->m_group[des/10].m_item[des%10].k[5] -= 10;
    ground->m_group[des/10].m_item[des%10].l[4] += 10;
    Ground::exenter(ground, src, des, id);
}

void Buff4011012::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
//    ground->m_group[des/10].m_item[des%10].k[4] += 10;
//    ground->m_group[des/10].m_item[des%10].k[5] += 10;
    ground->m_group[des/10].m_item[des%10].l[4] -= 10;
    Ground::exexit(ground, src, des, id);
}

void Buff4011012::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
