#include "buff2011020.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff2011020::run(Ground* ground, int obj)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (count >= 4)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 75, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }
    ++count;

    float point2 = Ground::pointbystar(ground, 100, src, method);
    bool b002 = check002(ground, obj);
    if (b002)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
    }
    else
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

bool Buff2011020::check002(Ground* ground, int obj)
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
