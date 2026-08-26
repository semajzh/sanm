#include "buff001750.h"
#include "ground.h"
#include "log/logger.h"

void Buff001750::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001751(src, des, 1750, 2));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff001751::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 += Ground::addln(ground, des, 0, -5.5);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff001751::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
