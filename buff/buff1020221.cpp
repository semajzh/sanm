#include "buff1020221.h"
#include "buff017.h"
#include "ground.h"
#include "log/logger.h"

void Buff10202211::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 90, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }

    float point2 = Ground::pointbystar(ground, 110, src, method);
    float point3 = Ground::pointbystar(ground, 300, src, method);

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x11, des);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        if (check017(ground, obj))
        {
            Ground::hloi1(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point2);
            Ground::hloi1(ground, &item1, &item1, method, point2);
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff017>(new Buff017(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    objs = Ground::selectObjN(ground, des, 0x21);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        if (check017(ground, obj))
        {
            Ground::actml(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point3);
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff017>(new Buff017(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

bool Buff10202211::check017(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 17)
        {
            return true;
        }
    }
    return false;
}

void Buff10202212::run(Ground* ground, int obj, float& point)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    if (obj/10 == des/10)
    {
        point *= 1 - point1 / 100;
    }
}

