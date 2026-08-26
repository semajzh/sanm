#include "buff6000121.h"
#include "buff011.h"
#include "ground.h"
#include "log/logger.h"
#include <cmath>

bool Buff6000121::run(Ground* ground, int obj, int m)
{
    if (m % 100 != 24)
    {
        return false;
    }

    if (src != des)
    {
        return check6000121(ground, src, obj, m);
    }

    int jl = 100 / std::pow(2, count);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return false;
    }

    ++count;
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj1 : objs)
    {
        int point;
        Item& item1 = ground->m_group[obj1/10].m_item[obj1%10];
        if (item1.i[0] > item1.i[1])
        {
            point = Ground::actbr(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, 100);
        }
        else
        {
            point = Ground::actml(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, 100);
        }
        point = point % J02_FLAG_1 / 2;
        Ground::hlo(ground, &ground->m_group[src/10].m_item[src%10], &item1, method, point);
    }

    return true;
}

bool Buff6000121::check6000121(Ground* ground, int obj1, int obj2, int m)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 6000121)
        {
            QSharedPointer<Buff6000121> buff = qSharedPointerCast<Buff6000121>(pbuff);
            return buff->run(ground, obj2, m);
        }
    }
    return false;
}
