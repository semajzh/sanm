#include "buff3010221.h"
#include "buff301021.h"
#include "ground.h"
#include "log/logger.h"

void Buff3010221::run(Ground* ground, int obj, int exid)
{
    if (qrand() % 100 + 1 <= 100 - 70)
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count <= 4)
    {
        zhisheng(ground);
    }
    if (check301021(ground, obj, exid))
    {
        zhisheng(ground);
    }
}

void Buff3010221::zhisheng(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    float point2 = Ground::pointbystar(ground, 40, src, method);

    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }

    if (++hlocount == 4)
    {
        hlocount = 0;
        QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
        for (int obj : objs)
        {
            Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
        }
    }
}

bool Buff3010221::check301021(Ground *ground, int obj, int exid)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 301021)
        {
            QSharedPointer<Buff301021> buff = qSharedPointerCast<Buff301021>(pbuff);
            return buff->run(ground, obj, exid);
        }
    }
    return false;
}
