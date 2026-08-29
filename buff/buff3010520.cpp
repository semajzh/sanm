#include "buff3010520.h"
#include "ground.h"
#include "log/logger.h"

void Buff3010520::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j6 = 0.8 * ground->m_group[src/10].m_item[src%10].star;
    ground->m_group[des/10].m_item[des%10].j[6] += j6;
}

void Buff3010520::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
}

void Buff3010520::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 90, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30105202(src, des, id));
    Ground::addBuff(ground, ground->buff[3][des], buff);
}

void Buff30105202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (count < 10)
    {
        ++count;
    }
}

void Buff30105202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
}

void Buff30105202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (count < 10)
    {
        ++count;
    }
}

void Buff30105202::run(Ground* ground)
{
    if (count > 0)
    {
        --count;
        Ground::run2223(ground, des, -1, true, true);
    }
}
