#include "buff4060121.h"
#include "ground.h"
#include "log/logger.h"

void Buff4060121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    k5 = Ground::addkn(ground, des, 5, point1 + ground->m_group[src/10].m_item[src%10].i[2] / 50);
    ground->m_group[des/10].m_item[des%10].k[5] += k5;
}

void Buff4060121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
}

void Buff4060121::run(Ground* ground)
{
    if (ground->m_round > 3)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 50, src, method);
    if (qrand() % 100 + 1 > 100 - point1 - ground->m_group[src/10].m_item[src%10].i[2] / 20)
    {
        Logger::H().printcustom(ground, 4060121, des, 4060121);
        Ground::run2223(ground, des, -1, true, false);
    }
}
