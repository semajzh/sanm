#include "buff2011120.h"
#include "buff014.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff2011120::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 200, src, method);
    float point2 = Ground::pointbystar(ground, 45, src, method);

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    Ground::hloi(ground, &item1, &item1, method, point1, item1.i[1] + item1.i[2]);

    int jl = point2 + (check201111(ground, des) ? 20 : 0);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff002(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);
    }
}

bool Buff2011120::check201111(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201111)
        {
            return true;
        }
    }
    return false;
}
