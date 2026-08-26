#include "buff0050220.h"
#include "ground.h"
#include "log/logger.h"

void Buff0050220::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00502202(des, des, 50220));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff0050220::run(Ground* ground, int )
{
    float point1 = Ground::pointbystar(ground, 50, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;
    Logger::H().printcustom(ground, 50220, des, 50220);
    Ground::run2223(ground, des, -1, true, false);
}

void Buff00502202::enter(Ground* ground)
{
    if (++count > 5)
    {
        return;
    }
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 7, src, method);
    k2 += point1;
    ground->m_group[des/10].m_item[des%10].k[2] += point1;
}

void Buff00502202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff00502202::update(Ground* ground, QSharedPointer<Buff> )
{
    if (++count > 5)
    {
        return;
    }
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 7, src, method);
    k2 += point1;
    ground->m_group[des/10].m_item[des%10].k[2] += point1;
}


