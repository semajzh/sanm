#include "buff2010520.h"
#include "ground.h"
#include "log/logger.h"

void Buff2010520::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j0 = Ground::pointbystar(ground, 45, src, method);
    ground->m_group[des/10].m_item[des%10].j[0] += j0;
}

void Buff2010520::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
}

void Buff2010520::run(Ground* ground, int obj)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    bool b201052 = check201052(ground, src);
    float point1 = Ground::pointbystar(ground, 60, src, method);
    point1 *= b201052 ? 2.8f : 1.0f;
    float k12 = ground->exsize(ground, obj) > 0 ? 20 : 0;
    int cap = b201052 ? 1 : 5;
    if (count++ < cap)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1, true, -999, k12);
    }
}

bool Buff2010520::check201052(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201052)
        {
            return true;
        }
    }
    return false;
}
