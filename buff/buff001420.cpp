#include "buff001420.h"
#include "ground.h"
#include "log/logger.h"

void Buff001420::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001421(src, des, 1420, 1));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff001421::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] += 10;
}

void Buff001421::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= 10;
}
