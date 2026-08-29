#include "buff3030120.h"
#include "buff303012.h"
#include "ground.h"
#include "log/logger.h"

bool Buff3030120::run(Ground* ground, float )
{
    if (qrand() % 100 + 1 <= 100 - over)
    {
        return false;
    }
    float point1 = Ground::pointbystar(ground, 10, src, method, -1);
    over -= point1;
    ground->m_group[des/10].m_item[des%10].h[0] = 1;
    Logger::H().printcustom(ground, 30301201, des);
    return true;
}

bool Buff3030120::run(Ground* ground, int& obj, float& point)
{
    Item& item2 = ground->m_group[obj/10].m_item[obj%10];
    if (obj == des || point * 10 <= item2.h[0])
    {
        return false;
    }
    float point1 = Ground::pointbystar(ground, 80, src, method);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    if (qrand() % 100 + 1 <= 100 - point1 - item1.i[2]/30)
    {
        return false;
    }
    if (round != ground->m_round)
    {
        count[0] = 0;
        count[1] = 0;
        count[2] = 0;
    }
    round = ground->m_round;
    if (++count[obj%10] > 3)
    {
        return false;
    }
    Logger::H().printcustom(ground, 30301202, obj, des);

    if (check303012(ground, des))
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3030122(des, obj, 303012));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    float point2 = Ground::pointbystar(ground, 50, src, method);
    obj = des;
    point = point * (1 - point2/100 - item1.i[2]/100/30);
    return true;
}

bool Buff3030120::check303012(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 303012)
        {
            return true;
        }
    }
    return false;
}
