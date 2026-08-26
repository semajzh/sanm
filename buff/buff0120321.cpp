#include "buff0120321.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff0120321::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}

void Buff0120321::run(Ground* ground, int obj)
{
    if (ground->m_group[des/10].m_item[des%10].h[0] <= 0)
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        objs.clear();
    }
    if (objs.contains(obj))
    {
        return;
    }
    objs.append(obj);

    float point1 = Ground::pointbystar(ground, 50, src, method);
    float jl = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[0]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    bool b002 = check002(ground, obj);
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(src, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
    if (b002)
    {
        float point2 = Ground::pointbystar(ground, 2, src, method);
        float k = Ground::addbyix(ground, point2, ground->m_group[des/10].m_item[des%10].i[0]);
        k1 += k;
        ground->m_group[des/10].m_item[des%10].k[1] += k;
    }
}

bool Buff0120321::check002(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 2)
        {
            return true;
        }
    }
    return false;
}
