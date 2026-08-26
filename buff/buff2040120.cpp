#include "buff2040120.h"
#include "buff016.h"
#include "ground.h"
#include "log/logger.h"

void Buff2040120::run(Ground* ground)
{
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;

    float point1 = Ground::pointbystar(ground, 40, src, method);
    int jl = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[0]+ground->m_group[des/10].m_item[des%10].i[3]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    float point2 = Ground::pointbystar(ground, 260, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
