#include "buff117011.h"
#include "buff1170121.h"
#include "buff016.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff117011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 6, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    l13 = Ground::addln(ground, des, 13, -point2);
    ground->m_group[des/10].m_item[des%10].l[13] += l13;
}

void Buff117011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[13] -= l13;
}

void Buff117011::run(Ground* ground)
{
    int src = check1170121(ground);
    if (src < 0)
    {
        return;
    }
    int num = check11701213(ground, src);
    if (qrand() % 100 + 1 <= 100 - 20 - num * 4)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, src, 0x0021);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(src, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

int Buff117011::check1170121(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013, des);
    for (int obj : objs)
    {
        for (QSharedPointer<Buff> pbuff : ground->buff[2][obj])
        {
            if (pbuff->id == 1170121)
            {
                return obj;
            }
        }
    }
    return -1;
}

int Buff117011::check11701213(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 11701213)
        {
            QSharedPointer<Buff11701213> buff = qSharedPointerCast<Buff11701213>(pbuff);
            return buff->num();
        }
    }
    return 0;
}
