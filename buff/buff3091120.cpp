#include "buff3091120.h"
#include "ground.h"
#include "log/logger.h"

void Buff3091120::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] += 40;
}

void Buff3091120::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= 40;
}

bool Buff3091120::run(Ground* ground, int method, float& point)
{
    if (method % 100 != 24)
    {
        return false;
    }

    float ex = ground->m_group[des/10].m_item[des%10].i[0] / 20;
    if (qrand() % 100 + 1 <= 100 - 35 - ex)
    {
        return false;
    }

    point *= 1 + (10 + ex) / 100;
    return true;
}
