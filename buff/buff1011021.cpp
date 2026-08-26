#include "buff1011021.h"
#include "ground.h"
#include "buff/buff012.h"
#include "log/logger.h"

void Buff1011021::run(Ground* ground)
{
    if (ground->m_round % 2 != 0)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 75, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        if (qrand() % 100 + 1 > 100 - point1)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(des, obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }
}

float Buff1011021::run(Ground* ground, int obj)
{
    float point = 0.0f;
    if (ground->m_round % 2 == 0)
    {
        return point;
    }

    float point1 = Ground::pointbystar(ground, 30, src, method);
    float point2 = Ground::pointbystar(ground, 15, src, method);
    if (ground->m_group[obj/10].m_item[obj%10].g[1] == 1)
    {
        point = -point1 - ground->m_group[des/10].m_item[des%10].i[2] / 20; //
    }
    else
    {
        point = -point2 - ground->m_group[des/10].m_item[des%10].i[2] / 40; //
    }
    return point;
}
