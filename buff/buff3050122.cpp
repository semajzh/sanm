#include "buff3050122.h"
#include "ground.h"
#include "log/logger.h"

void Buff30501221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    k2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    k2 = Ground::addkn(ground, des, 2, k2);
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff30501221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff30501222::run(Ground* ground)
{
    if (check30501221(ground, des))
    {
        float point1 = Ground::pointbystar(ground, 300, src, method);
        Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[des/10].m_item[des%10], method, point1);
    }
}

bool Buff30501222::check30501221(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 30501221)
        {
            return true;
        }
    }
    return false;
}

