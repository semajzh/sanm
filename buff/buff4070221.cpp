#include "buff4070221.h"
#include "ground.h"
#include "log/logger.h"

void Buff4070221::run(Ground* ground, int n)
{
    if (round != ground->m_round)
    {
        jl = 80.0f;
        round = ground->m_round;
    }
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }
    if (n > 0)
    {
        jl -= 10;
    }

    float point1 = Ground::pointbystar(ground, 140, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        hlo(ground, obj, Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1));
    }
}

void Buff4070221::hlo(Ground* ground, int obj, float point)
{
    if (point < 0 || !check005(ground, obj))
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj1 : objs)
    {
        Item& item1 = ground->m_group[des/10].m_item[des%10];
        Ground::hlo(ground, &item1, &ground->m_group[obj1/10].m_item[obj1%10], method, point * (40 + item1.i[1]/20) / 100); //697,420,379.68
    }
}

bool Buff4070221::check005(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 5)
        {
            return true;
        }
    }
    return false;
}
