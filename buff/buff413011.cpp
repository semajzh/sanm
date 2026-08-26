#include "buff413011.h"
#include "ground.h"
#include "log/logger.h"

void Buff413011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k1 = Ground::addkn(ground, des, 1, 7);
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
}

void Buff413011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}

bool Buff413011::run(Ground* ground, int obj)
{
    float maxi1 = Ground::getMaxi(ground, des);
    float maxi2 = Ground::getMaxi(ground, obj);
    float point1 = 35 + maxi1/maxi2*10;
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return false;
    }
    return true;
}
