#include "buff1091120.h"
#include "ground.h"
#include "buff111.h"
#include "log/logger.h"

void Buff10911201::run(Ground* ground)
{
    int jl = 10 - (float)(ground->m_group[des/10].m_item[des%10].h[0]) / ground->m_group[des/10].m_item[des%10].h[3] * 10;
    if (qrand() % 100 + 1 <= 100 - 60 - jl)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(src, des, id, 1));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff10911202::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (count >= 2)
    {
        return;
    }
    int jl = ground->m_group[src/10].m_item[src%10].i[0] / 10;
    if (qrand() % 100 + 1 <= 100 - 35 - jl)
    {
        return;
    }

    ++count;
    QVector<int> objs = Ground::selectObjN(ground, src, 0x0221);
    for (int obj : objs)
    {
        Ground::run2223(ground, des, obj, true, false);
    }
}
